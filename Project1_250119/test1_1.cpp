#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//计算y的函数
int SWICH(int a)
{
	//定义返回值b
	int b;

	//检验a的合法性
	if (a <= -10000 || a >= 10000)
	{
		printf("the number is error,please input the right number:");
		scanf("%d", &a);
		b = SWICH(a);
	}

	//计算返回值b
	else if (a > 0)
		b = -1;
	else if (a == 0)
		b = 0;
	else
		b = 1;

	//返回b值
	return b;
}

int main()
{
	//初始化与输入导航
	int x, y;
	printf("please input the X number(-10000<X<10000):");
	scanf("%d", &x);
	
	//计算y值
	y = SWICH(x);

	//输出y值
	printf("the Y number:%d", y);

	return 0;
}