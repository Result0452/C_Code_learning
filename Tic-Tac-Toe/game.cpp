#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

/*将棋盘打印成如下形态
   |   |   
---|---|---
   |   |
---|---|---
   |   |
  */
void PrintBoard (char board[ROW][COL], int rows, int cols)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");
			else
				printf("\n");
		}
		if (i < ROW - 1)
		{
			for (int j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
				else
					printf("\n");
			}
		}
	}
}

//玩家进行操作,棋子用“O”表示
void PlayerMove(char board[ROW][COL], int rows, int cols)
{
	int x = 0;  //玩家输入的横坐标
	int y = 0;  //玩家输入的纵坐标
	int eff = 1;  //判断输入的坐标是否有效的变量，1则循环判断，0则跳出循环
	printf("请输入你要下的位置：>");
	do
	{
		scanf("%d %d", &x, &y);
		//输入的坐标合法
		if (x > 0 && x <= ROW && y > 0 && y <= COL)
		{
			//输入的坐标位置不空闲
			if (board[x - 1][y - 1] != ' ')
			{
				printf("你输入的位置已有棋子，请重新输入：>");
			}
			//输入的坐标位置空闲
			else
			{
				board[x - 1][y - 1] = 'O';
				eff = 0;  //输入的坐标有效，将0赋给eff以跳出循环
			}
		}
		//输入的坐标非法
		else
		{
			printf("你输入的位置不是有效位置，请重新输入：>");
		}
	} while (eff);
	
}

//电脑进行操作，棋子用“X”表示
void ComputerMove(char board[ROW][COL], int rows, int cols)
{
	Sleep(500);  //延时500ms再进行操作，模拟电脑思考的过程
	int x = 0;  //电脑输入的横坐标
	int y = 0;  //电脑输入的纵坐标
	//给横坐标和纵坐标赋随机值
	x = rand() % ROW;
	y = rand() % COL;

	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
		else
		{
			//重新给横坐标和纵坐标赋随机值
			x = rand() % ROW;
			y = rand() % COL;
		}
	}
}

//判断是否胜利,玩家获胜则返回O，电脑获胜则返回X，平局则返回D，继续游戏则返回C
int IsWin(char board[ROW][COL], int rows, int cols)
{
	int flag = 0;//声明一个变量flag以判断是否成功连线，若为1则成功连线，为0则未连线
	//判断行是否成功连线
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (board[i][0] != board[i][j])
			{
				flag = 0;
			}
			else if (board[i][j] == ' ')
			{
				flag = 0;
			}
			else
				flag = 1;
			//若flag为0，表示这一条线有空格或两个棋子不相等，跳出该循环，不再判断该条线
			if (flag == 0)
				break;
		}
		if (1 == flag)
		{
			//判断谁成功获胜
			if (board[i][0] == 'O')
				return board[i][0];  //电脑获胜返回O
			else if (board[i][0] == 'X')
				return board[i][0];  //电脑获胜返回X
		}
	}

	//判断列是否成功连线
	for (int j = 0; j < COL; j++)
	{
		for (int i = 0; i < ROW; i++)
		{
			if (board[0][j] != board[i][j])
			{
				flag = 0;
			}
			else if (board[i][j] == ' ')
			{
				flag = 0;
			}
			else
				flag = 1;
			//若flag为0，表示这一条线有空格或两个棋子不相等，跳出该循环，不再判断该条线
			if (flag == 0)
				break;
		}
		if (1 == flag)
		{
			//判断谁成功获胜
			if (board[0][j] == 'O')
				return board[0][j];  //电脑获胜返回O
			else if (board[0][j] == 'X')
				return board[0][j];  //电脑获胜返回X
		}
	}

	//判断左斜线是否成功连线,仅在ROW == COL时有效
	for (int n = 0; n < ROW; n++)
	{
		if (board[0][0] != board[n][n])
		{
			flag = 0;
		}
		else if (board[n][n] == ' ')
		{
			flag = 0;
		}
		else
			flag = 1;
		//若flag为0，表示这一条线有空格或两个棋子不相等，跳出该循环，不再判断该条线
		if (flag == 0)
			break;
	}
	if (1 == flag)
	{
		//判断谁成功获胜
		if (board[0][0] == 'O')
			return board[0][0];  //电脑获胜返回O
		else if (board[0][0] == 'X')
			return board[0][0];  //电脑获胜返回X
	}

	//判断右斜线是否成功连线,仅在ROW == COL时有效
	for (int n = 0; n < ROW; n++)
	{
		if (board[0][ROW - 1] != board[0 + n][ROW - 1 - n])
		{
			flag = 0;
		}
		else if (board[0 + n][ROW - 1 - n] == ' ')
		{
			flag = 0;
		}
		else
			flag = 1;
		//若flag为0，表示这一条线有空格或两个棋子不相等，跳出该循环，不再判断该条线
		if (flag == 0)
			break;
	}
	if (1 == flag)
	{
		//判断谁成功获胜
		if (board[0][ROW - 1] == 'O')
			return board[0][ROW - 1];  //电脑获胜返回O
		else if (board[0][ROW - 1] == 'X')
			return board[0][ROW - 1];  //电脑获胜返回X
	}

	//当没有成功连线时，判断是平局还是继续游戏
	if (0 == flag)
	{
		int spare = 1;  //棋盘是否有空格，有则为0，无则为1，以判断是否执行返回D的操作
		//当棋盘中有空格时返回C表示继续游戏
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				if (board[i][j] == ' ')
				{
					j = COL;
					spare = 0;  //棋盘中有空格，让变量spare为0；不执行返回D的操作
					return 'C';
					break;
				}
			}
		}
		//当棋盘中无空格返回D表示平局
		if (spare)
			return 'D';
	}
}