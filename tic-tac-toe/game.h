#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
#include<string.h>
void menu();
void InitBoard(char arr[ROW][COL],int row,int col);//初始化棋盘
void game();//游戏入口
void DisplayBoard(char arr[ROW][COL], int row, int col);//打印棋盘
void player_move(char arr[ROW][COL], int row, int col);//玩家移动
void computer_move(char arr[ROW][COL],int row,int  col);//电脑移动
char judge(char arr[ROW][COL], int row, int  col);//判断胜负
int is_full(char arr[ROW][COL], int row, int  col);
