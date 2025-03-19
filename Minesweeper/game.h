#pragma once

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

#define LEVEL_1_ROW_AND_COL 5//定义难度1的行和列为5
#define LEVEL_1_MINE_NUM 3//定义难度1的雷的数量

#define LEVEL_2_ROW_AND_COL 9//定义难度2的行和列为9
#define LEVEL_2_MINE_NUM 10//定义难度2的雷的数量

#define LEVEL_3_ROW_AND_COL 15//定义难度3的行和列为15
#define LEVEL_3_MINE_NUM 50//定义难度3的雷的数量

#define MAX_ROW_AND_COL (LEVEL_3_ROW_AND_COL) //定义最大行和列为LEVEL_3_ROW_AND_COL，便于后续初始化数组

#define UNOPEN_AREA '*'  //定义board和after_mark_mine_num中的初始内容

//初始化数组为'0'或'*'
void InitBoard(char mine[][MAX_ROW_AND_COL + 2], int row_and_col, char init_cha);

//将数组的内容打印出来
void PrintBoard(char mine[][MAX_ROW_AND_COL + 2], int row_and_col);

//埋雷操作,埋下mine_num个雷
void SetMine(char mine[][MAX_ROW_AND_COL + 2], int row_and_col, int mine_num, int first_input_x, int first_input_y);

//标识地雷的区域，标识了的区域在board为'p'
void Mark_Mine(char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* flag_num_p);

//取消标识地雷的区域，将标识区域从'p'改为'*'
void Cancle_Mark_Mine(char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* flag_num_p, int mine_num);

//打开所选的区域
void Open_Area(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], char after_mark_mine_num[][MAX_ROW_AND_COL + 2], int row_and_col, int* game_state_p, int* safe_area_p, int* is_set_p, int mine_num);

//获取该区域周围雷的数量
void Get_Mine_Num(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], char after_mark_mine_num[][MAX_ROW_AND_COL + 2], int row_and_col, int* safe_area_p, int x, int y);

//游戏胜利判定
void IsWin(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* safe_area_p, int* game_state_p);