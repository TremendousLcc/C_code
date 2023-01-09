#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
  int g_val = 2022;
  //若用static来修饰全局变量  则该变量只能作用与该源文件不能被其他文件使用  
  //同理被static修饰的函数也失去外部连接属性 其他文件也不能使用了
  int Add(int x, int y)
  {
	  return x + y;
  }
  //计算n!
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
  //计算1！+2！+...+n!
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
  //计算str的长度
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
	  printf("             游戏名称猜数字\n");
	  printf("             猜一个0~10之间的数字\n");
	  srand((unsigned)time(NULL));
	  int ret = rand()%11;
	  int gus;
	  while (1)
	  {
		  printf("请输入猜的数字：");
		  scanf("%d", &gus);
		  if (gus > ret)
		  {
			  printf("猜大了\n");
		  }
		  else if (gus < ret)
		  {
			  printf("猜小了\n");

		  }
		  else
		  {
			  printf("恭喜你，猜对了\n");
			  break;
		  }
	  }

  }

  //小乐乐计算题
  //计算m=max3(a+b,b,c)/(max3(a,b+c,c)+max3(a,b,b+c))
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