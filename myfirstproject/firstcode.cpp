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
	//��������֮��
	int num1, num2;
	//printf_s("input two number��");
	//scanf("%d %d", &num1, &num2);
	//printf_s("sum=%d\n", num1 + num2);
	//ΪɶVS2019 6����С������ ����6����Խ�� ��devc++����
	char arr[6];
	scanf("%s", arr);
	printf("%s\n", arr);
	
	return 0;
}
