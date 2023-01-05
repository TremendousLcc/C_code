#define _CRT_SECURE_NO_WARNINGS 1
  int g_val = 2022;
  //若用static来修饰全局变量  则该变量只能作用与该源文件不能被其他文件使用  
  //同理被static修饰的函数也失去外部连接属性 其他文件也不能使用了
  int Add(int x, int y)
  {
	  return x + y;
  }