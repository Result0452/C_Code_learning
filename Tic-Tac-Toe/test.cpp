#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("+--------------+\n");
	printf("|    1.PLAY    |\n");
	printf("|    0.EXIT    |\n");
	printf("+--------------+\n");
}

int main()
{
	srand((unsigned int)time(NULL)); //利用时间戳做随机数种子
	int input = 0;  //声明input以进行菜单操作
	char ret = 'C';  //声明判断是否获胜的返回值的函数变量
	
	//判断是否玩游戏
	do
	{
		//输出菜单界面
		menu();
		printf("是否游玩三子棋：>");
		scanf("%d", &input);
		//输入1时玩游戏
		if (1 == input)
		{
			//声明与初始化棋盘数组
			char board[ROW][COL] = { 0 };//声明
			//初始化棋盘数组使其中元素初始为空格
			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					board[i][j] = ' ';
				}
			}

			//打印棋盘
			printf("\n");  //换行增加可读性
			PrintBoard(board, ROW, COL);

			//操作
			do
			{
				//玩家操作,ret为C时才操作
				if (ret == 'C')
				{
					PlayerMove(board, ROW, COL);
					printf("玩家所下棋:\n");
					PrintBoard(board, ROW, COL);  //打印棋盘
					printf("\n");  //换行增加可读性
					ret = IsWin(board, ROW, COL);  //判断是否获胜
				}

				//电脑操作,ret为C时才操作
				if (ret == 'C')
				{
					ComputerMove(board, ROW, COL);
					printf("电脑所下棋:\n");
					PrintBoard(board, ROW, COL);  //打印棋盘
					printf("\n");  //换行增加可读性
					ret = IsWin(board, ROW, COL);  //判断是否获胜
				}
				
				//判断ret值，若为O则玩家获胜，X为电脑获胜，D为平局，C为继续
				//ret为O时
				if ('O' == ret)
				{
					printf("恭喜你！你获胜了！\n");
					PrintBoard(board, ROW, COL);  //打印棋盘
					printf("\n");  //换行增加可读性
					break;
				}
				else if ('X' == ret)
				{
					printf("可惜了，你输了\n");
					PrintBoard(board, ROW, COL);  //打印棋盘
					printf("\n");  //换行增加可读性
					break;
				}
				else if ('D' == ret)
				{
					printf("打成平局咯\n");
					printf("\n");  //换行增加可读性
					break;
				}
			} while (1);
			
		}

		//输入2时退出游戏
		else if (0 == input)
		{
			printf("不玩这个游戏！！！\n\n");
			break;
		}

		//输入其他时提示错误
		else
			printf("输入错误，请重新输入\n\n");
	} while (input);
	return 0;
}