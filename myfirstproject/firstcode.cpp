#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<time.h>
//
////定义宏
////宏就类似于函数，不要把这里的ADD与add文件的函数混为一谈
//#define ADD(x,y) (x+y)
//enum SEX
//{
//	male,//0
//	female,//1
//	secret//2
//};
////static 是修饰的变量出了作用域依旧存在  直到程序结束 static作用是改变了变量的生命周期使其一直存在于内存中 静态区中（静态区包含静态变量和全局变量
////所以static修饰的变量只被初始化了一次，再次碰到不会被重复初始化  生命周期改了但是作用域没变
////void test()
////{
////	static int i = 0;
////	i++;
////	printf("%d  ", i);
////}
//extern int g_val;
//extern int Add(int, int);
//extern long long fact(int);
//extern long long sum_fact(int);
//extern int bin_search(int[], int, int, int);
//extern void menu();
//extern void game();
//extern int max_3(int, int, int);
//extern double max3(int, int, int);
//extern void bubble_sort(int*, int);
//struct Stu {
//	char name[20];
//	int age;
//	char sex[5];
//	double score;
//};
//int main()
//{
//	printf_s("hello world!\n");
//	printf_s("%d\n", sizeof(unsigned));
//	short age = 10;
//	short* age0 = NULL;
//	age0 = &age;
//	//*age0 = 18;
//	printf_s("age=%d\n", age);
//	//求两个数之和
//	int num1, num2;
//	/*printf_s("input two number：");
//	scanf("%d %d", &num1, &num2);
//	printf_s("sum=%d\n", num1 + num2);
//	为啥VS2019 6个大小的数组 输满6个会越界 而devc++不会*/
//	/*char arr[6];
//	scanf("%s", arr);
//	
//	printf("%s\n", arr);*/
//
//
//	/*int arr[10] = { 1 };
//	for (int i = 0; i < 10; i++)
//		printf("%d  ", arr[i]);*/
//	/*printf("%d\n", female);*/
//	//char arr1[] = "abcde";//以这种形式声明  默认 \0为结束符  所以会多占用一个空间用sizeof可以测的他的实际大小
//	//char arr2[5] = { 'a','c','b','d','e' };//以这种形式声明不会多占用一个空间 但是输出会有问题，因为没有结束符，所以会多打印一些东西
//	//若给arr2限定大小 则会正常输出，表示限定大小的数组结尾默认会有\0 而且会占用一个空间，若{}中元素把固定大小的数组arr刚好占满则结束符\0就消失了也不会正常结束
//	//printf("%d\n", sizeof(arr1));
//	//printf("%s\n", arr1);
//	//printf("%d\n", sizeof(arr2));
//	//printf("%s\n", arr2);
//	printf("are you sure\?\n");
//	
//	
//	//for (int j = 0; j < 10; j++)
//	//{
//	//	test();
//	//}
//
//	printf("%d\n", g_val);
//	int x = (4+5);
//	printf("%d\n", x);
//
//	struct Stu s1 = { "高位",20,"male",90 };
//	struct Stu* ps1 = &s1;
//	//如何输入结构体
//	//scanf("%s %d %s %lf", s1.name, &(s1.age), s1.sex, &(s1.score));
//	//printf("%s  %d  %s  %lf\n", s1.name, s1.age, s1.sex, s1.score);
//	//printf("%s  %d  %s  %lf\n", ps1->name, ps1->age, ps1->sex, ps1->score);
//
//	
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	getchar();
//	//	putchar(ch);
//	//}
//
//	//int n;
//	//scanf("%d", &n);
//	//printf("%d!=%ld\n", n, fact(n));
//	//printf("sum_%d!=%ld\n", n, sum_fact(n));
//	//int arr[100];
//	//for (int i = 0; i < n; i++)
//	//	scanf("%d", arr + i);
//	//printf("press a digit:");
//	//int key;
//	//scanf("%d", &key);
//	//printf("the position of %d in the arr is %d\n", key, bin_search(arr,0,n-1,key));
//
//	//char arr1[] = "welcome to bit...";
//	//char arr2[] = "#################";
//	//int left = 0,right=strlen(arr1)-1;
//	//while (left <= right)
//	//{
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
//	//}
//
//	//char psw[] = "success";
//	//int i;
//	//char login[10] = "";
//	//for ( i = 0; i < 3; i++)
//	//{
//	//	printf("input password:");
//	//	scanf("%s", login);
//	//	if (!strcmp(login, psw))
//	//	{
//	//		printf("输入成功!\n");
//	//		break;
//	//	}
//	//	else {
//	//		printf("重新输入！\n");
//	//		
//	//	}
//	//}
//	//if (i >= 3)
//	//{
//	//	printf("登录失败！\n");
//	//}
//
//
//	//srand((unsigned)time(NULL));
//	//int choice=1;
//	//do {
//	//	menu();
//	//	scanf("%d", &choice);
//	//	switch (choice) {
//	//	case 1:
//	//		game();
//	//		
//	//		break;
//	//	case 0:
//	//		printf("游戏结束！\n");
//	//		break;
//	//	default:
//	//		printf("重新输入！\n");
//	//	}
//	//} while (choice);
//
//	//int a, b, c;
//	//scanf("%d%d%d",&a, &b, &c);
//	//printf("max3:%.2lf\n", max3(a, b, c));
//	//int* p = &a;
//	//auto ptr = p;
//	//printf("%d\n", *ptr);
//	//int arr1[5][3] = { {1,2},{3,4},{5,6},{7,8},{9,10} };
//	////二维数组换行时，地址也是连续的  因此二维数组必须定义列数 不一定要行数
//	////对于二位数组  arr[i]为第i+1行的首地址
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	for (int j = 0; j < 3; j++)
//	//	{
//	//		printf("&arr1[%d][%d]=%p\n", i, j, &arr1[i][j]);
//	//	}
//	//}
//	int arr[5] = { 2,4,1,4,5 };
//	int* p = arr + 5;
//	//for (int i = 0; i < 5; i++)
//	//	printf("%p\t", arr + i);
//	//printf("\n");
//	//不管p的初始地址是啥，只要用到动态分配  地址自动转移到堆区
//	//p = (int*)malloc(5);
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	scanf("%d", p + i);
//	//}
//	//bubble_sort(arr, 5);
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//	////for (int i = 0; i < 5; i++)
//	////{
//	////	printf("%p\n", p + i);
//	////}
//	////sizeof +数组名 是整个数组的大小  &数组名是整个数组的地址 &数组名+1可以验证
//	////其他的情况都是数组首地址
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr+1);
//	//printf("%p\n", &arr+2);
//	return 0;
//}
#include<stdio.h>
int i;
int main()
{
	i--;
	printf("%d",i>sizeof i);
	return 0;
}