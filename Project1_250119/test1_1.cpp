#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//����y�ĺ���
int SWICH(int a)
{
	//���巵��ֵb
	int b;

	//����a�ĺϷ���
	if (a <= -10000 || a >= 10000)
	{
		printf("the number is error,please input the right number:");
		scanf("%d", &a);
		b = SWICH(a);
	}

	//���㷵��ֵb
	else if (a > 0)
		b = -1;
	else if (a == 0)
		b = 0;
	else
		b = 1;

	//����bֵ
	return b;
}

int main()
{
	//��ʼ�������뵼��
	int x, y;
	printf("please input the X number(-10000<X<10000):");
	scanf("%d", &x);
	
	//����yֵ
	y = SWICH(x);

	//���yֵ
	printf("the Y number:%d", y);

	return 0;
}