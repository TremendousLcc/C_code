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
	//��������֮��
	int num1, num2;
	/*printf_s("input two number��");
	scanf("%d %d", &num1, &num2);
	printf_s("sum=%d\n", num1 + num2);
	ΪɶVS2019 6����С������ ����6����Խ�� ��devc++����*/
	/*char arr[6];
	scanf("%s", arr);
	
	printf("%s\n", arr);*/
	/*int arr[10] = { 1 };
	for (int i = 0; i < 10; i++)
		printf("%d  ", arr[i]);*/
	/*printf("%d\n", female);*/
	char arr1[] = "abcde";//��������ʽ����  Ĭ�� \0Ϊ������  ���Ի��ռ��һ���ռ���sizeof���Բ������ʵ�ʴ�С
	char arr2[5] = { 'a','c','b','d','e' };//��������ʽ���������ռ��һ���ռ� ��������������⣬��Ϊû�н����������Ի���ӡһЩ����
	//����arr2�޶���С ��������������ʾ�޶���С�������βĬ�ϻ���\0 ���һ�ռ��һ���ռ䣬��{}��Ԫ�ذѹ̶���С������arr�պ�ռ���������\0����ʧ��Ҳ������������
	/*printf("%d\n", sizeof(arr1));
	printf("%s\n", arr1);
	printf("%d\n", sizeof(arr2));
	printf("%s\n", arr2);*/
	printf("are you sure\?\n");
	

	return 0;
}
