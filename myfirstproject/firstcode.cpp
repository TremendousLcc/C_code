#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����
//��������ں�������Ҫ�������ADD��add�ļ��ĺ�����Ϊһ̸
#define ADD(x,y) (x+y)
enum SEX
{
	male,//0
	female,//1
	secret//2
};
//static �����εı����������������ɴ���  ֱ��������� static�����Ǹı��˱�������������ʹ��һֱ�������ڴ��� ��̬���У���̬��������̬������ȫ�ֱ���
//����static���εı���ֻ����ʼ����һ�Σ��ٴ��������ᱻ�ظ���ʼ��  �������ڸ��˵���������û��
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
	//char arr1[] = "abcde";//��������ʽ����  Ĭ�� \0Ϊ������  ���Ի��ռ��һ���ռ���sizeof���Բ������ʵ�ʴ�С
	//char arr2[5] = { 'a','c','b','d','e' };//��������ʽ���������ռ��һ���ռ� ��������������⣬��Ϊû�н����������Ի���ӡһЩ����
	//����arr2�޶���С ��������������ʾ�޶���С�������βĬ�ϻ���\0 ���һ�ռ��һ���ռ䣬��{}��Ԫ�ذѹ̶���С������arr�պ�ռ���������\0����ʧ��Ҳ������������
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

	struct Stu s1 = { "��λ",20,"male",90 };
	struct Stu* ps1 = &s1;
	//�������ṹ��
	scanf("%s %d %s %lf", s1.name, &(s1.age), s1.sex, &(s1.score));
	printf("%s  %d  %s  %lf\n", s1.name, s1.age, s1.sex, s1.score);
	printf("%s  %d  %s  %lf\n", ps1->name, ps1->age, ps1->sex, ps1->score);

	return 0;
}
