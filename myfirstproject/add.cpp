#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
  int g_val = 2022;
  //����static������ȫ�ֱ���  ��ñ���ֻ���������Դ�ļ����ܱ������ļ�ʹ��  
  //ͬ��static���εĺ���Ҳʧȥ�ⲿ�������� �����ļ�Ҳ����ʹ����
  int Add(int x, int y)
  {
	  return x + y;
  }
  //����n!
  long long fact(int n)
  {
	  if (n == 0) return 1;

	  long long ret=1;
	  for (int i = 1; i <= n; i++)
	  {
		  ret *= i;
	  }
	  return ret;
  }
  //����1��+2��+...+n!
  long long sum_fact(int n)
  {
	  long long ret = 0;
	  long long res = 1;
	  for (int i = 1; i <= n; i++)
	  {
		  res *= i;
		  ret += res;
	  }
	  return ret;
  }
  void swap(int& a, int& b)
  {
	  int temp = a;
	  a = b;
	  b = temp;
  }
  int bin_search(int arr[], int left, int right,int key)
  {
	  int mid = 0;
	  while (left <= right)
	  {
		  mid = left + (right - left) / 2;
		  if (arr[mid] == key) return mid;
		  else if (key > arr[mid])
		  {
			  left = mid + 1;
		  }
		  else {
			  right = mid - 1;
		  }
	  }
	  if (left > right)
		  return -1;
  }
  //����str�ĳ���
  int str_len(char* p)
  {
	  if (*p == '\0')
		  return 0;
	  return 1 + str_len(p + 1);
  }
  void menu()
  {
	  printf("***************************************\n");
	  printf("**********     1.play    **************\n");
	  printf("**********     0.exit    **************\n");
	  printf("***************************************\n");

  }
  
  void game()
  {
	  printf("             ��Ϸ���Ʋ�����\n");
	  printf("             ��һ��0~10֮�������\n");
	  srand((unsigned)time(NULL));
	  int ret = rand()%11;
	  int gus;
	  while (1)
	  {
		  printf("������µ����֣�");
		  scanf("%d", &gus);
		  if (gus > ret)
		  {
			  printf("�´���\n");
		  }
		  else if (gus < ret)
		  {
			  printf("��С��\n");

		  }
		  else
		  {
			  printf("��ϲ�㣬�¶���\n");
			  break;
		  }
	  }

  }

  //С���ּ�����
  //����m=max3(a+b,b,c)/(max3(a,b+c,c)+max3(a,b,b+c))
  int max(int a, int b)
  {
	  return a > b ? a : b;
  }
  int max_3(int a, int b, int c)
  {
	  return max(a, b) > c ? max(a, b) : c;
  }
  double max3(int a, int b, int c)
  {

	  return max_3(a + b, b, c) * 1.0 / (max_3(a, b + c, c) + max_3(a, b, b + c));
  }
  void bubble_sort(int* p, int n)
  {
	  for (int i = 0; i < n; i++)
	  {
		  int flag = 1;
		  for (int j = 0; j < n - i - 1; j++)
		  {
			  if (p[j] > p[j + 1])
			  {
				  swap(p[j], p[j + 1]);
				  flag = 0;
			  }
		  }
		  if (flag) break;
	  }
  }