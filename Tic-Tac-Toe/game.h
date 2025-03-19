#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define ROW 3  //棋盘行为3
#define COL 3  //棋盘列为3

//打印棋盘
void PrintBoard (char board[ROW][COL], int rows, int cols);

//玩家进行操作
void PlayerMove(char board[ROW][COL], int rows, int cols);

//电脑进行操作
void ComputerMove(char board[ROW][COL], int rows, int cols);

//判断是否胜利,玩家获胜则返回O，电脑获胜则返回X，平局则返回D，继续游戏则返回C
int IsWin(char board[ROW][COL], int rows, int cols);