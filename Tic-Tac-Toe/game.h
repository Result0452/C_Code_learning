#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define ROW 3  //������Ϊ3
#define COL 3  //������Ϊ3

//��ӡ����
void PrintBoard (char board[ROW][COL], int rows, int cols);

//��ҽ��в���
void PlayerMove(char board[ROW][COL], int rows, int cols);

//���Խ��в���
void ComputerMove(char board[ROW][COL], int rows, int cols);

//�ж��Ƿ�ʤ��,��һ�ʤ�򷵻�O�����Ի�ʤ�򷵻�X��ƽ���򷵻�D��������Ϸ�򷵻�C
int IsWin(char board[ROW][COL], int rows, int cols);