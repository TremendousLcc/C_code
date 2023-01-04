#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum SEX
{
	male,//0
	female,//1
	secret//2
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
	char arr1[] = "abcde";//以这种形式声明  默认 \0为结束符  所以会多占用一个空间用sizeof可以测的他的实际大小
	char arr2[5] = { 'a','c','b','d','e' };//以这种形式声明不会多占用一个空间 但是输出会有问题，因为没有结束符，所以会多打印一些东西
	//若给arr2限定大小 则会正常输出，表示限定大小的数组结尾默认会有\0 而且会占用一个空间，若{}中元素把固定大小的数组arr刚好占满则结束符\0就消失了也不会正常结束
	/*printf("%d\n", sizeof(arr1));
	printf("%s\n", arr1);
	printf("%d\n", sizeof(arr2));
	printf("%s\n", arr2);*/
	printf("are you sure\?\n");
	

	return 0;
}
