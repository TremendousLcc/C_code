#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
	//printf_s("input two number：");
	//scanf("%d %d", &num1, &num2);
	//printf_s("sum=%d\n", num1 + num2);
	//为啥VS2019 6个大小的数组 输满6个会越界 而devc++不会
	char arr[6];
	scanf("%s", arr);
	printf("%s\n", arr);
	
	return 0;
}
