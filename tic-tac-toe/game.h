#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
#include<string.h>
void menu();
void InitBoard(char arr[ROW][COL],int row,int col);//��ʼ������
void game();//��Ϸ���
void DisplayBoard(char arr[ROW][COL], int row, int col);//��ӡ����
void player_move(char arr[ROW][COL], int row, int col);//����ƶ�
void computer_move(char arr[ROW][COL],int row,int  col);//�����ƶ�
char judge(char arr[ROW][COL], int row, int  col);//�ж�ʤ��
int is_full(char arr[ROW][COL], int row, int  col);
