#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<time.h>
//
////�����
////��������ں�������Ҫ�������ADD��add�ļ��ĺ�����Ϊһ̸
//#define ADD(x,y) (x+y)
//enum SEX
//{
//	male,//0
//	female,//1
//	secret//2
//};
////static �����εı����������������ɴ���  ֱ��������� static�����Ǹı��˱�������������ʹ��һֱ�������ڴ��� ��̬���У���̬��������̬������ȫ�ֱ���
////����static���εı���ֻ����ʼ����һ�Σ��ٴ��������ᱻ�ظ���ʼ��  �������ڸ��˵���������û��
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
//	//��������֮��
//	int num1, num2;
//	/*printf_s("input two number��");
//	scanf("%d %d", &num1, &num2);
//	printf_s("sum=%d\n", num1 + num2);
//	ΪɶVS2019 6����С������ ����6����Խ�� ��devc++����*/
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
//	//char arr1[] = "abcde";//��������ʽ����  Ĭ�� \0Ϊ������  ���Ի��ռ��һ���ռ���sizeof���Բ������ʵ�ʴ�С
//	//char arr2[5] = { 'a','c','b','d','e' };//��������ʽ���������ռ��һ���ռ� ��������������⣬��Ϊû�н����������Ի���ӡһЩ����
//	//����arr2�޶���С ��������������ʾ�޶���С�������βĬ�ϻ���\0 ���һ�ռ��һ���ռ䣬��{}��Ԫ�ذѹ̶���С������arr�պ�ռ���������\0����ʧ��Ҳ������������
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
//	struct Stu s1 = { "��λ",20,"male",90 };
//	struct Stu* ps1 = &s1;
//	//�������ṹ��
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
//	//		printf("����ɹ�!\n");
//	//		break;
//	//	}
//	//	else {
//	//		printf("�������룡\n");
//	//		
//	//	}
//	//}
//	//if (i >= 3)
//	//{
//	//	printf("��¼ʧ�ܣ�\n");
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
//	//		printf("��Ϸ������\n");
//	//		break;
//	//	default:
//	//		printf("�������룡\n");
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
//	////��ά���黻��ʱ����ַҲ��������  ��˶�ά������붨������ ��һ��Ҫ����
//	////���ڶ�λ����  arr[i]Ϊ��i+1�е��׵�ַ
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
//	//����p�ĳ�ʼ��ַ��ɶ��ֻҪ�õ���̬����  ��ַ�Զ�ת�Ƶ�����
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
//	////sizeof +������ ����������Ĵ�С  &����������������ĵ�ַ &������+1������֤
//	////������������������׵�ַ
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