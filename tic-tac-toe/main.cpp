#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include "game.h"
int main()
{
	int choice;
	do {
		menu();
		scanf("%d", &choice);
		switch (choice) 
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("please choice again\n");
			break;
		}
	} while (choice);
}