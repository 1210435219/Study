#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//代码可扩展性高
#define ROW 3
#define COL 3
//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL],int row , int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
char CheckWin(char board[ROW][COL], int row, int col);

