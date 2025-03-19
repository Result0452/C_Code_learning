#pragma once

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

#define LEVEL_1_ROW_AND_COL 5//�����Ѷ�1���к���Ϊ5
#define LEVEL_1_MINE_NUM 3//�����Ѷ�1���׵�����

#define LEVEL_2_ROW_AND_COL 9//�����Ѷ�2���к���Ϊ9
#define LEVEL_2_MINE_NUM 10//�����Ѷ�2���׵�����

#define LEVEL_3_ROW_AND_COL 15//�����Ѷ�3���к���Ϊ15
#define LEVEL_3_MINE_NUM 50//�����Ѷ�3���׵�����

#define MAX_ROW_AND_COL (LEVEL_3_ROW_AND_COL) //��������к���ΪLEVEL_3_ROW_AND_COL�����ں�����ʼ������

#define UNOPEN_AREA '*'  //����board��after_mark_mine_num�еĳ�ʼ����

//��ʼ������Ϊ'0'��'*'
void InitBoard(char mine[][MAX_ROW_AND_COL + 2], int row_and_col, char init_cha);

//����������ݴ�ӡ����
void PrintBoard(char mine[][MAX_ROW_AND_COL + 2], int row_and_col);

//���ײ���,����mine_num����
void SetMine(char mine[][MAX_ROW_AND_COL + 2], int row_and_col, int mine_num, int first_input_x, int first_input_y);

//��ʶ���׵����򣬱�ʶ�˵�������boardΪ'p'
void Mark_Mine(char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* flag_num_p);

//ȡ����ʶ���׵����򣬽���ʶ�����'p'��Ϊ'*'
void Cancle_Mark_Mine(char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* flag_num_p, int mine_num);

//����ѡ������
void Open_Area(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], char after_mark_mine_num[][MAX_ROW_AND_COL + 2], int row_and_col, int* game_state_p, int* safe_area_p, int* is_set_p, int mine_num);

//��ȡ��������Χ�׵�����
void Get_Mine_Num(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], char after_mark_mine_num[][MAX_ROW_AND_COL + 2], int row_and_col, int* safe_area_p, int x, int y);

//��Ϸʤ���ж�
void IsWin(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* safe_area_p, int* game_state_p);