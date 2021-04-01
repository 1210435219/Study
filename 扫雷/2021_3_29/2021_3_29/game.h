#pragma once

#define EASY 10

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows,int cols,char set);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
//count-�����׵ĸ���
void SetMine(char mine[ROWS][COLS], int row,int col,int count);

//�Ų���
void FindMine(char mine[ROWS][COLS],
			  char show[ROWS][COLS], 
		   	  int row, 
			  int col);
