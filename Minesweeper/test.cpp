#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//开始游戏菜单界面
void start_game_menu()
{
	printf("+------------+\n");
	printf("|   1.PLAY   |\n");
	printf("|   0.EXIT   |\n");
	printf("+------------+\n");
	printf("是否开始扫雷游戏：>");
}

//选择游戏难度界面
void game_level_menu()
{
	printf("\n");  //换行便于游览游戏界面
	printf("+------------------+\n");
	printf("|      1.Easy      |\n");
	printf("|      2.Medium    |\n");
	printf("|      3.Hard      |\n");
	printf("+------------------+\n");
	printf("请选择游戏难度：>");
}

//选择操作选项的界面
void action_options(int flag_num)
{
	printf("+----------------------------------------+\n");
	printf("|      1.打开区域                        |\n");
	printf("|      2.标识区域(还可以标识%02d个区域)    |\n", flag_num);
	printf("|      3.取消标识                        |\n");
	printf("+----------------------------------------+\n");
	printf("请选择你要操作的选项：>");
}

int main()
{
	srand((unsigned int)time(NULL));  //利用时间戳设置种子以求随机值
	int start_game_menu_input = 0;  //初始化开始游戏菜单的选择按键变量，当为1时开始游戏，0时退出游戏
	int row_and_col = 0;  //初始化选择难度后表示游戏空间长宽的变量
	int mine_num = 0;  //设置要埋的雷的数量
	int game_state = -1;  //定义游戏的状态，-1为继续游戏，0为游戏结束，1为游戏胜利
	int* game_state_p = &game_state;  //定义一个指针变量指向game_state以后续可以在函数中改变它
	int safe_area = 0;//定义没有雷的区域的数量
	int* safe_area_p = &safe_area;//定义一个指针变量指向safe_area以后续可以在函数中改变它
	char mine[MAX_ROW_AND_COL + 2][MAX_ROW_AND_COL + 2] = { 0 };  //声明一个二维数组，创造长和宽为MAX_ROW_AND_COL的游戏空间，使用最大的难度值以适应不同难度所需的数组大小，mine为埋雷的数组，其中数组元素为1则该位置有雷，0则该位置无雷。MAX_ROW_AND_COL + 2 是为了给空间创造一个边界便于扫雷辨别周围8个空间有无雷时的合法性性检验
	char board[MAX_ROW_AND_COL + 2][MAX_ROW_AND_COL + 2] = { 0 };  //创造长和宽为MAX_ROW_AND_COL的游戏空间，使用最大的难度值以适应不同难度所需的数组大小，board为显示在屏幕的数组，其中"*"表示为要扫的位置
	char after_mark_mine_num[MAX_ROW_AND_COL + 2][MAX_ROW_AND_COL + 2] = { 0 };  //记录标识过后的周围的雷的数量

	start_game_menu();//开始游戏菜单
	do
	{
		scanf("%d", &start_game_menu_input);  //获取玩家的开始游戏反馈，为1时开始游戏，0时退出游戏

		//开始游戏
		if (1 == start_game_menu_input)
		{

			//选择游戏难度
			game_level_menu();  //难度选择菜单
			do
			{
				int game_level_menu_input = 0;  //初始化游戏难度的变量
				scanf("%d", &game_level_menu_input);  //获取玩家选择的游戏难度
				switch (game_level_menu_input)
				{
					//难度为1时,将长和宽 和 雷的数量设置为LEVEL_1_ROW_AND_COL
				case 1:
					row_and_col = LEVEL_1_ROW_AND_COL;
					mine_num = LEVEL_1_MINE_NUM;
					break;
					//难度为2时,将长和宽 和 雷的数量设置为LEVEL_2_ROW_AND_COL
				case 2:
					row_and_col = LEVEL_2_ROW_AND_COL;
					mine_num = LEVEL_2_MINE_NUM;
					break;
					//难度为3时,将长和宽 和 雷的数量设置为LEVEL_3_ROW_AND_COL
				case 3:
					row_and_col = LEVEL_3_ROW_AND_COL;
					mine_num = LEVEL_3_MINE_NUM;
					break;
					//输入难度值不在可选范围内
				default:
					printf("无此难度，请重新输入:>");
					break;
				}
			} while (!row_and_col);

			//游戏操作过程
			//初始化
			InitBoard(mine, row_and_col + 2, '0');  //初始化埋雷数组，令其全部为0；
			InitBoard(board, row_and_col + 2, UNOPEN_AREA);  //初始化显示在屏幕的数组，令其全部为*；
			*safe_area_p = row_and_col * row_and_col - mine_num;//将safe_area的值初始化
			int flag_num = mine_num;  //初始化可标识的区域为雷的数量
			int* flag_num_p = &flag_num; //定义一个指针变量指向flag_num以后续可以在函数中改变它
			int is_set = 1;//定义一个变量记录是否已经初始化游戏的内容,1为未初始化，0为已初始化
			int* is_set_p = &is_set;//定义一个指针变量指向is_set以后续可以在函数中改变它
			//操作选项选择
			while (-1 == game_state)
			{
				int action_options_input = 0; //定义一个记录游戏选项的变量
				PrintBoard(board, row_and_col);//打印操作过后的游戏内容
				action_options(flag_num);  //选择操作选项的界面
				scanf("%d", &action_options_input);  //获取玩家选择的选项
				switch (action_options_input)
				{
					//打开区域操作
				case 1:
					Open_Area(mine, board, after_mark_mine_num, row_and_col, &game_state, &safe_area, &is_set, mine_num);
					break;
					//标识区域操作
				case 2:
					Mark_Mine(board, row_and_col, &flag_num);
					break;
					//取消标识操作
				case 3:
					Cancle_Mark_Mine(board, row_and_col, &flag_num, mine_num);
					break;
					////输入选项不在可选范围内
				default:
					printf("无此选项，请重新输入:>");
					break;
				}
				//游戏胜利判定
				IsWin(mine, board, row_and_col, &safe_area , &game_state);
			}
			break;
		}
		//退出游戏
		else if (!start_game_menu_input)
		{
			printf("正在退出游戏......");
			Sleep(2000);  //延迟2000ms让玩家可以看到提示后再退出窗口
		}
		//输入非法内容
		else
		{
			printf("输入有误，请重新输入:>");
		}
	} while (start_game_menu_input);
	return 0;
}