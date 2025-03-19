#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//初始化数组为'0'或'*'
void InitBoard(char mine[][MAX_ROW_AND_COL + 2], int row_and_col, char init_cha)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row_and_col; i++)
	{
		for (j = 0; j < row_and_col; j++)
		{
			mine[i][j] = init_cha;
		}
	}
}

//将数组的内容打印出来
void PrintBoard(char mine[][MAX_ROW_AND_COL + 2], int row_and_col)
{
	printf("\n");  //换行便于游览游戏界面
	int i = 0;
	int j = 0;
	printf("+");
	for (j = 0; j <= row_and_col; j++)
	{
		printf("---");
	}
	printf("+\n");
	printf("|00 ");
	for (j = 1; j <= row_and_col; j++)
	{
		printf("%02d ", j);
	}
	printf("|\n");
	for (i = 1; i <= row_and_col; i++)
	{
		printf("|");
		printf("%02d ", i);
		for (j = 1; j <= row_and_col; j++)
		{
			printf("%c  ", mine[i][j]);
		}
		printf("|\n");
	}
	printf("+");
	for (j = 0; j <= row_and_col; j++)
	{
		printf("---");
	}
	printf("+\n");
}

//埋雷操作,埋下mine_nums个雷
void SetMine(char mine[][MAX_ROW_AND_COL + 2], int row_and_col, int mine_num, int first_input_x, int first_input_y)
{
	while (mine_num)//当埋下了mine_num个雷后，mine_num将为0就不进行循环了
	{
		int x = (rand() % row_and_col) + 1;  //随机生成一个数字作为雷的x坐标
		int y = (rand() % row_and_col) + 1;  //随机生成一个数字作为雷的y坐标
		//合法性检测，检验随机生成的坐标所对应的数组元素在不在合法的空间范围内
		if (mine[x][y] == '0' && !(x == first_input_x && y == first_input_y))
		{
			mine[x][y] = '1';//将雷所在的位置的数组元素改为'1'
			mine_num--;//埋下一个雷就减1
		}
	}
}

//标识地雷的区域，标识了的区域在board为'p'
void Mark_Mine(char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* flag_num_p)
{
	int x = 0;//初始化坐标x
	int y = 0;//初始化坐标y
	if (*flag_num_p)
	{
		printf("\n选择你要标识的位置(输入\"-1 -1\"退出到操作选项菜单)：>");
		while (1)
		{
			scanf("%d %d", &x, &y);
			if (-1 == x || -1 == y)
			break;
			//合法性检验
			if (x > 0 && x <= row_and_col && y > 0 && y <= row_and_col && board[x][y] == '*')
			{
				board[x][y] = 'p';
				(*flag_num_p)--;//可标识的数量少一个
				break;
			}
			else
				printf("输入的坐标位置有误或已被标识，请重新输入:>");
		}
	}
	else
		printf("还可标识的区域为0个，请重新操作\n\n");
}

//取消标识地雷的区域，将标识区域从'p'改为'*'
void Cancle_Mark_Mine(char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* flag_num_p, int mine_num)
{
	if ((*flag_num_p) - mine_num)
	{
		int x = 0;//初始化坐标x
		int y = 0;//初始化坐标y
		printf("\n选择你要取消标识的位置(输入\"-1 -1\"退出到操作选项菜单)：>");
		while (1)
		{
			scanf("%d %d", &x, &y);
			if (-1 == x || -1 == y)
				break;
			//合法性检验
			if (x > 0 && x <= row_and_col && y > 0 && y <= row_and_col && board[x][y] == 'p')
			{
				board[x][y] = '*';
				(*flag_num_p)++;//可标识的数量加一个
				break;
			}
			else
				printf("输入的坐标位置有误或未被标识，请重新输入:>");
		}
	}
	else
		printf("当前无区域被标识\n");
}

//打开所选的区域
void Open_Area(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], char after_mark_mine_num[][MAX_ROW_AND_COL + 2], int row_and_col, int* game_state_p, int* safe_area_p, int* is_set_p, int mine_num)
{
	int x = 0;//初始化坐标x
	int y = 0;//初始化坐标y
	printf("\n选择你要打开区域的位置(输入\"-1 -1\"退出到操作选项菜单):>");
	while (*game_state_p)
	{
		scanf("%d %d", &x, &y);
		if (-1 == x || -1 == y)
			break;
		if (x <= 0 || x > row_and_col || y <= 0 || y > row_and_col)
			printf("输入的坐标位置不存在，请重新输入:>");
		else if (board[x][y] == 'p')
		{
			printf("(%d,%d)已被标识，请重新输入:>", x, y);
		}
		else if (board[x][y] != '*')
		{
			printf("(%d,%d)已被打开，请重新输入:>", x, y);
		}
		else if (mine[x][y] == '1')
		{
			*game_state_p = 0;//将游戏状态改为0以进行游戏结束判断
			//游戏结束，将最终游戏局面打印出来给玩家看
			printf("\n--------------------------------------------------------------\n");
			PrintBoard(board, row_and_col);
			printf("游戏最终局面\n");
			PrintBoard(mine, row_and_col);
			printf("雷区布局\n");
			printf("\n所打开的区域(%d,%d)有雷！游戏结束......\n\n", x, y);
			printf("\n--------------------------------------------------------------\n");
			Sleep(60000);  //延迟60000ms让玩家可以看到提示后再退出窗口
		}
		else//该区域为安全区域的情况
		{
			if (*is_set_p)
			{
				SetMine(mine, row_and_col, mine_num, x, y);//埋雷操作,埋下mine_num个雷
				*is_set_p = 0;//将状态更新为已初始化
			}
			Get_Mine_Num(mine, board, after_mark_mine_num, row_and_col, safe_area_p, x, y);//获取该区域周围雷的数量
			break;
		}		
	}
}

//获取该区域周围雷的数量
void Get_Mine_Num(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], char after_mark_mine_num[][MAX_ROW_AND_COL + 2], int row_and_col, int* safe_area_p,int x, int y)
{
	if (x > 0 && x <= row_and_col && y > 0 && y <= row_and_col && board[x][y] == '*')//合法性检验
	{
		(*safe_area_p) --;//需打开的安全区域减1
		char count = '0';//计算周围雷的变量
		char after_mark_count = '0';//计算除去周围有标识的区域的该区域周围雷的数量
		for(int i = x -1; i <= x+1; i++)
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (mine[i][j] == '1')
					count++;
				if (mine[i][j] == '1' && board[i][j] != 'p')
					after_mark_count++;
			}
		board[x][y] = count;  //更新游戏显示局面的状态
		after_mark_mine_num[x][y] = after_mark_count;  //更新除去周围有标识的区域的该区域周围雷的数量
		//连锁反应打开该安全区域周围八个区域
		if (after_mark_mine_num[x][y] == '0')
		{
			if (board[x][y] == '0')
			{
				board[x][y] = ' ';
			}
			for (int i = x - 1; i <= x + 1; i++)
			{
				for (int j = y - 1; j <= y + 1; j++)
				{
					if (i != x || j != y)//排除该区域自己本身
					{
						if (i >= 1 && i <= row_and_col && j >= 1 && j <= row_and_col)//检验合法性
						{
							Get_Mine_Num(mine, board, after_mark_mine_num, row_and_col, safe_area_p, i, j);//获取该区域周围雷的数量，递归调用直到到达边界或区域周围雷的数量不为0
						}
					}
				}
			}
		}
	}
}

//游戏胜利判定
void IsWin(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* safe_area_p, int* game_state_p)
{
	if (0 == *safe_area_p && -1 == *game_state_p)
	{
		*game_state_p = 1;
		//游戏结束，将最终游戏局面打印出来给玩家看
		printf("\n--------------------------------------------------------------\n");
		PrintBoard(board, row_and_col);
		printf("游戏最终局面\n");
		PrintBoard(mine, row_and_col);
		printf("雷区布局\n");
		printf("\n你将全部的雷都找了出来!游戏胜利!\n\n");
		printf("\n--------------------------------------------------------------\n");
		Sleep(60000);  //延迟60000ms让玩家可以看到提示后再退出窗口
	}
}