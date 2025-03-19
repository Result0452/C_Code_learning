#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int num[3], i;
	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	//≈≈–Ú
	for (i = 1; i < 3; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (num[j] > num[j - 1])
				swap(&num[j], &num[j - 1]);
		}
	}

	printf("%d %d %d", num[0],num[1],num[2]);
	return 0;
}
