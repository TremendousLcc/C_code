#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//定义宏
//宏就类似于函数，不要把这里的ADD与add文件的函数混为一谈
#define ADD(x,y) (x+y)
enum SEX
{
	male,//0
	female,//1
	secret//2
};
//static 是修饰的变量出了作用域依旧存在  直到程序结束 static作用是改变了变量的生命周期使其一直存在于内存中 静态区中（静态区包含静态变量和全局变量
//所以static修饰的变量只被初始化了一次，再次碰到不会被重复初始化  生命周期改了但是作用域没变
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d  ", i);
//}
extern int g_val;
extern int Add(int, int);
struct Stu {
	char name[20];
	int age;
	char sex[5];
	double score;
};
int main()
{
	printf_s("hello world!\n");
	printf_s("%d\n", sizeof(unsigned));
	short age = 10;
	short* age0 = NULL;
	age0 = &age;
	//*age0 = 18;
	printf_s("age=%d\n", age);
	//求两个数之和
	int num1, num2;
	/*printf_s("input two number：");
	scanf("%d %d", &num1, &num2);
	printf_s("sum=%d\n", num1 + num2);
	为啥VS2019 6个大小的数组 输满6个会越界 而devc++不会*/
	/*char arr[6];
	scanf("%s", arr);
	
	printf("%s\n", arr);*/


	/*int arr[10] = { 1 };
	for (int i = 0; i < 10; i++)
		printf("%d  ", arr[i]);*/
	/*printf("%d\n", female);*/
	//char arr1[] = "abcde";//以这种形式声明  默认 \0为结束符  所以会多占用一个空间用sizeof可以测的他的实际大小
	//char arr2[5] = { 'a','c','b','d','e' };//以这种形式声明不会多占用一个空间 但是输出会有问题，因为没有结束符，所以会多打印一些东西
	//若给arr2限定大小 则会正常输出，表示限定大小的数组结尾默认会有\0 而且会占用一个空间，若{}中元素把固定大小的数组arr刚好占满则结束符\0就消失了也不会正常结束
	//printf("%d\n", sizeof(arr1));
	//printf("%s\n", arr1);
	//printf("%d\n", sizeof(arr2));
	//printf("%s\n", arr2);
	printf("are you sure\?\n");
	
	
	//for (int j = 0; j < 10; j++)
	//{
	//	test();
	//}

	printf("%d\n", g_val);
	int x = (4+5);
	printf("%d\n", x);

	struct Stu s1 = { "高位",20,"male",90 };
	struct Stu* ps1 = &s1;
	//如何输入结构体
	scanf("%s %d %s %lf", s1.name, &(s1.age), s1.sex, &(s1.score));
	printf("%s  %d  %s  %lf\n", s1.name, s1.age, s1.sex, s1.score);
	printf("%s  %d  %s  %lf\n", ps1->name, ps1->age, ps1->sex, ps1->score);

	return 0;
}
