#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void InitBoard(char arr[ROW][COL],int row,int col)
{
	memset(arr[0], ' ', row*col);
}
void menu()
{
	printf("*******************************\n");
	printf("**********  1.play  ***********\n");
	printf("**********  0.exit  ***********\n");
	printf("*******************************\n");
}
void DisplayBoard(char arr[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1) printf("|");
			
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1) printf("|");
			}
		}
		printf("\n");

		
	}
}
void player_move(char arr[ROW][COL], int row, int col)//����ƶ�
{
	int x, y;
	
	
	while (1)
	{
		printf("������壺>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr[x - 1][y - 1] == ' ') {
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������\n");
			}
		}
		else {
			printf("�Ƿ�ȡֵ������������\n");
		}
	}
}
void computer_move(char arr[ROW][COL], int row, int col)
{
	srand((unsigned int)time(NULL));
	int x, y;
	printf("��������:>\n");
	while (1)
	{

		x = rand() % row;
		y = rand() % col;
		if (x >= 0 && x < row && y >= 0 && y < col)
		{
			if (arr[x][y] == ' ') {
				arr[x][y] = '#';
				break;
			}
		}
	}
}
//�ж������Ƿ�����
//1��ʾ�� 0��ʾû��
static int is_full(char arr[ROW][COL], int row, int  col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}

	}
	return 1;
}
//�ж�ʤ��
//*��ʾ��һ�ʤ   #��ʾ���Ի�ʤ  E��ʾƽ��  C��ʾ����
char judge(char arr[ROW][COL], int row, int  col)
{
	int i = 0;
	for (i = 0; i < row; i++)//�ж��л�ʤ
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
			return arr[i][1];
	}
	for (i = 0; i < col; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
			return arr[0][i];
	}
	if (arr[0][0] == arr[1][1] && arr[2][2] == arr[1][1] && arr[1][1] != ' ')
		return arr[1][1];
	if (arr[2][0] == arr[1][1] && arr[0][2] == arr[1][1] && arr[1][1] != ' ')
		return arr[1][1];
	if (is_full(arr, row, col)) return 'E';
	return 'C';
}

void game()
{
	
	//�������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char key = '\0';
	while (1)
	{
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		key=judge(board, ROW, COL);
		if (key != 'C') break;
		computer_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		key=judge(board, ROW, COL);
		if (key != 'C') break;

	}
	if (key == '*') printf("���ʤ����\n");
	else if (key == '#')printf("����ʤ����\n");
	else printf("ƽ��\n");
}