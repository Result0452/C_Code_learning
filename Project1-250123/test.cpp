#define _CRT_SECURE_NO_WARNINGS

///*����n�Ľ׳�*/
//#include <stdio.h>
//int main()
//{
//	int fac = 1;
//	int n = 0;
//	scanf("%d", &n);
//	
//	//����
//	do
//	{
//		fac = fac * n;
//		n--;
//	}
//	while (n > 0);
//
//	printf("%d", fac);
//	return 0;
//}

///*����a,b��ֵ*/
//#include <stdio.h>
//void swap(int* p1, int* p2)
//{
//	int temp = 0;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d,%d", a, b);
//	return 0;
//}

///*����1!+2!+3!+...+10!*/
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int i = 0;
//	int j = 0;
//	int fac = 1;
//	int sum = 0;
//
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			fac *= j;
//		}
//		sum += fac;
//		fac = 1;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

///*����1!+2!+3!+...+10!����һ�ַ���*/
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int i = 0;
//	int fac = 1;
//	int sum = 0;
//
//	for (i = 1; i <= n; i++)
//	{
//		fac *= i;
//		sum += fac;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

///*ͨ���۰����Ѱ�������������ĳ������λ��*/
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int cout = 0;
//	int n = 0;
//	int temp = 0;
//	int min = 0;
//	int max = (sizeof(arr) / sizeof(arr[0])) - 1;
//
//	for (cout = 0; cout < 10; cout++)
//	{
//		scanf("%d", &arr[cout]);
//	}
//	printf("input the number n:");
//	scanf("%d", &n);
//
//	while (min <= max)
//	{
//		temp = (min + max) / 2;
//		if (arr[temp] < n)
//			min = temp + 1;
//		else if (arr[temp] > n)
//			max = temp - 1;
//	}
//
//	printf("%d", temp+1);
//	return 0;
//}

///*ʵ���ִ����������м俿£*/
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "Hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}

///*�������������˺ź�����*/
//#include<string.h>
//#include <stdio.h>
//int main()
//{
//	char user[] = "admin";
//	char password[] = "123456";
//	char ue[20] = { 0 };
//	char pw[20] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("Input the user:");
//		scanf("%s", ue);
//		printf("Input the password:");
//		scanf("%s", pw);
//		if (0 == strcmp (ue, user) && 0 == strcmp(pw, password))
//		{
//			printf("Welcome You!!!");
//			break;
//		}
//	}
//	if (3 == i)
//		printf("worry so more.");
//
//	return 0;
//}

///*�����ֵ�С��Ϸ*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define RANG 100 //���ò����ֵķ�Χ
//
////�˵�������ʾ
//void menu()
//{
//	printf("+-------------+\n");
//	printf("|   1. play   |\n");
//	printf("|   0. exit   |\n");
//	printf("+-------------+\n");
//	printf("�Ƿ�����Ϸ:>");
//}
//
////��Ϸ����
//void play()
//{
//	//���������
//	int num = rand() % RANG + 1;
//	int i = 0;
//
//	//�ж�����
//	do
//	{
//		i = 0;
//		printf("������ֵĴ�С(1��%d):>", RANG);
//		if (1 != (scanf("%d", &i)))
//		{
//			printf("����Ĳ������֣�����������\n");
//			int c;
//			while ((c = getchar()) != '\n' && c != EOF);
//			continue;
//		}
//		if (i > num)
//			printf("�´��ˣ�");
//		else if (i < num)
//			printf("��С�ˣ�");
//		else
//			printf("�¶��ˣ����־���%d��\n", num);
//	} 
//	while (i != num);
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //����ʱ�������һ�������rand������
//
//	//�˵�����Ϸ
//	do
//	{
//		menu();
//		scanf("%d", &input);
//
//		/*if (1 == input)
//		{
//			printf("\n");
//			play();
//			printf("\n");
//		}
//		else if (0 == input)
//			printf("\n�˳���Ϸ");
//		else
//			printf("\n�����������������\n");*/
//		switch (input)
//		{
//			case 1:
//			{
//				printf("\n");
//				play();
//				printf("\n");
//				break;
//			}
//			case 0:
//			{
//				printf("\n�˳���Ϸ");
//				break;
//			}
//			default:
//			{
//				printf("\n�����������������\n");
//				break;
//			}
//
//		}
//	} 
//	while (input);
//}

///*��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9*/
//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	for (num = 1; num <= 100; num++)
//	{
//		if (9 == num % 10)
//		{
//			count++;
//			printf("%d ", num);
//		}
//		else if (9 == num / 10)
//		{
//			count++;
//			printf("%d ", num);
//		}
//	}
//	printf("\n��%d��", count);
//	return 0;
//}

///*����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����*/
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	float sum = 0.0f;
//
//	for (num = 1; num <= 100; num++)
//	{
//		if (1 == num % 2)
//		{
//			//��numΪ1ʱ���������ǰ��Ҫ��+��
//			if (1 == num)
//			{
//				printf("1/1");
//				sum += 1.0 / num;
//				goto one;  //������ǰ��䣬��ֹ�ٳ���һ��1/1
//			}
//
//			printf("+1/%d", num);
//			sum += 1.0 / num;
//		}
//		else
//		{
//			printf("-1/%d", num);
//			sum -= 1.0 / num;
//		}
//	one:;  //one��ǩ����298����ת�ط�
//	}
//
//	printf("=%f", sum);
//}

///*��10 �����������ֵ*/
//#include <stdio.h>
//
//int main()
//{
//	int num[10] = { 0 };
//	int i = 0;
//	int max = 0;
//
//	//ͨ��������������
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	printf("�������\n");
//
//	//��������Ѱ�����ֵ
//	max = num[0];  //max��������õ������ֵ
//	for (i = 0; i < 10; i++)
//	{
//		max = max > num[i] ? max : num[i];
//	}
//
//	printf("���ֵ��%d\n", max);
//	return 0;
//}

///*����Ļ�����9*9�˷��ھ���*/
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			num = j * i;
//			printf("%d*%d=%-2d | ", j, i, num); //"%-2d"��num���ռ�����ַ���Ȳ�����룬ʹ������������
//		}
//		printf("\n");
//	}
//	return 0;
//}

///*���������ʽ��%dʱscanf�ķ���ֵ*/
//#include <stdio.h>
//int main()
//{
//	start:
//	int ret = 0;
//	char a = 0;
//	ret = scanf("%d", &a);
//	int c;
//	while (c = getchar() != '\n' && c != EOF);
//	printf("ret��%d��a��%d\n", ret, a);
//	goto start;
//}

///*�������㷨*/
//#include <stdio.h>
//
//int main()
//{
//	float t1 = 0.0f;
//	float t2 = 0.0f;
//	float t = 0.01;
//	float s = 0.0f;
//	float v = 0.0f;
//
//	scanf("%f %f %f", &t1, &t2, &t);
//	s = 340.0 * (t1 / 2.0) - 340.0 * (t2 / 2.0);
//	v = 3.6 * (s / t);
//	printf("�ٶ��� %.2f km/h\n", v);
//	return 0;
//}

///*��Ŀ����ͳ���ַ����е����ֺ���ĸ
//��д����ʵ�����¹��ܣ�
//1. �û�����һ���ַ��������Ȳ�����100����
//2. ͳ���ַ����������ַ���'0' - '9'������ĸ�ַ���'a' - 'z'��'A' - 'Z'����������
//3. ���ͳ�ƽ����*/
//
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = { 0 };
//	int i = 0;
//	int num = 0;
//	int cha = 0;
//	printf("�������ַ�����");
//	//scanf("%s", str);
//	fgets(str, sizeof(str), stdin);
//
//	//ͳ�������ַ�
//	for (i = 0; i < 100; i++)
//	{
//		if (str[i] == '\0' || str[i] == '\n')
//			break;
//		if (str[i] < 58 && str[i] > 47)
//			num++;
//	}
//	//ͳ����ĸ�ַ�
//	for (i = 0; i < 100; i++)
//	{
//		if (str[i] == '\0' || str[i] == '\n')
//			break;
//		if (str[i] < 91 && str[i] > 64)
//			cha++;
//		else if (str[i] < 123 && str[i] > 96)
//			cha++;
//	}
//
//	printf("�����ַ�������%d\n��ĸ�ַ�������%d\n", num, cha);
//	return 0;
//}

///*��Ŀ�ģ�����Խ������
//��д����ʵ�����¹��ܣ�
//1. �û�����һ�� 3x3 ����������
//2. ���㲢������������Խ���Ԫ��֮�ͣ����Խ��ߺ͸��Խ��ߣ���*/
//
//#include <stdio.h>
//
//int main()
//{
//	int num[9] = { 0 };
//	int num1 = 0;
//	int num2 = 0;
//	int i = 0;
//	printf("������3��3����\n");
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &num[i]);
//
//	}
//	num1 = num[0] + num[4] + num[8];
//	num2 = num[2] + num[4] + num[6];
//	printf("���Խ���֮�ͣ�%d\n���Խ���֮�ͣ�%d\n", num1, num2);
//	return 0;
//}

///*��Ŀ�壺�򵥼�����**
//��д����ʵ��һ��֧�ּӼ��˳��ļ��׼�������  
//1. �û�����������������һ���������+��-��*��/����  
//2. ����������������������  
//3. �������Ϊ����������ʾ�����󣺳�������Ϊ�㡱��  */
//
//#include <stdio.h>
//int main()
//{
//	float num1 = 0.0f;
//	float num2 = 0.0f;
//	char opr = 0;
//	float num = 0;
//	scanf("%f %c %f", &num1, &opr, &num2);
//
//	switch (opr)
//	{
//	case '+':
//		num = num1 + num2;
//		printf("%.2f", num);
//		break;
//	case '-':
//		num = num1 - num2;
//		printf("%.2f", num);
//		break;
//	case '*':
//		num = num1 * num2;
//		printf("%.2f", num);
//		break;
//	case '/':
//		num = (float)num1 / num2;
//		if (0 == num2)
//		{
//			printf("���󣺳�������Ϊ��");
//			break;
//		}
//		printf("%.2f", num);
//		break;
//	}
//
//	return 0;
//}

/*����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��

������
��ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

���磬121 �ǻ��ģ��� 123 ���ǡ�*/

///*����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��
//������:��ָ���򣨴������ң��͵��򣨴������󣩶�����һ�������������磬121 �ǻ��ģ��� 123 ���ǡ�*/
//
//#include <stdio.h>
//int main()
//{
//    char x[12] = { 0 };
//    int n = 0;
//    int i = 0;
//    scanf("%s", x);
//    while (x[i] != '\0')
//    {
//        i++;
//    }
//    n = i - 1;
//    i = 0;
//    while (i <= (((n - 1) / 2) + 1))
//    {
//        if (x[i] != x[n - i])
//        {
//            printf("false");
//            break;
//        }
//        i++;
//        if (((n - i - 1) == i) || (i == n - i))
//        {
//            printf("true");
//            break;
//        }
//    }
//    return 0;
//}

///*��ĿҪ�󣺱�дһ�������ҳ����������е����ֵ�ʹδ�ֵ��
//ʾ�����飺
//���룺1 5 3 7 9
//��������ֵ�� 9���δ�ֵ�� 7��*/
//
//#include <stdio.h>
//#define MAX_NUM_Lenth 100
//int main()
//{
//	int num[MAX_NUM_Lenth] = { 0 };  //�ٶ����ֻ��MAX_NUM_Lenth��Ԫ��
//	int max_num = 0;
//	int sec_max_num = 0;
//	int sz = 0;
//	//������������
//	for (int i = 0; i < MAX_NUM_Lenth; i++)
//	{
//		scanf("%d", &num[i]);
//		sz++;
//		if (int c = getchar() == '\n')
//		//if (num[i] == EOF)
//			break;
//	}
//
//	//����Ѱ�����ֵ�ʹδ�ֵ
//	max_num = num[0];
//	sec_max_num = num[0];
//	for (int i = 1; i < sz; i++)
//	{
//		if (num[i] > max_num)
//		{
//			sec_max_num = max_num;
//			max_num = num[i];
//		}
//		else if (num[i] == max_num)
//			sec_max_num = max_num;
//	}
//
//	printf("���ֵ�� %d���δ�ֵ�� %d��", max_num, sec_max_num);
//	return 0;
//}

///*��ĿҪ���ж�������ַ����Ƿ�Ϊ��Ч���������С�
//ʾ�����룺
//��(())��
//��)((()��
//��()��
//�����
//True, False, True.*/
//
//#include <stdio.h>
//#define MAX_Lenth 100
//
//int main()
//{
//	char sig[MAX_Lenth] = { 0 };//���ַ�����󳤶�ΪMAX_Lenth
//	int all_sig = 0;
//	for (int i = 0; i < MAX_Lenth; i++)
//	{
//		scanf("%c", &sig[i]);
//		if (sig[i] == '\n')
//		{
//			if (0 == i)
//			{
//				printf("δ�������");
//				return -1;
//			}
//			break;
//		}
//		if (sig[i] != '(' && sig[i] != ')')
//		{
//			printf("�����˷Ƿ��ַ�");
//			return -1;
//		}
//		if (all_sig < 0)
//			break;
//		if ('(' == sig[i])
//			all_sig++;
//		else
//			all_sig--;
//	}
//	if (all_sig)
//		printf("False");
//	else
//		printf("True");
//	return 0;
//}

///*дһ�������ҳ����ֵ*/
//#include <stdio.h>
//
//int max(int x, int y)
//{
//	x = x > y ? x : y;
//	return x;
//}
//
//int main()
//{
//	int a = 0, b = 0, max_num = 0;
//	scanf("%d %d", &a, &b);
//	max_num = max(a, b);
//	printf("%d", max_num);
//	return 0;
//}

///*дһ�����������������ͺ���������*/
//#include <stdio.h>
//
//void swap_num(int *x, int *y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap_num(&a, &b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

///*дһ�������ж��ǲ�������*/
//#include <stdio.h>
//
//int pri(int x)
//{
//	int n = x - 1;
//	while (x % n != 0)
//		n--;
//	if (1 == n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (pri(a))
//		printf("%d������", a);
//	else
//		printf("%d��������", a);
//	return 0;
//}

///*дһ�������ж��ǲ�������*/
//#include <stdio.h>
//
//void Is_Leap(int year)
//{
//	if ((0 == year % 4 && year % 100 != 0) || 0 == year % 400)
//		printf("%d��������", year);
//	else
//		printf("%d�겻������", year);
//}
//
//int main()
//{
//	int years = 0;
//	scanf("%d", &years);
//	Is_Leap(years);
//	return 0;
//}

///*дһ��������ӡ�����ж��ǲ�������*/
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2)
//		printf("%d������", a);
//	else
//		printf("%d��ż��", a);
//	return 0;
//}

///*1.����һ������ֵ���޷��ţ�����˳���ӡ����ÿһλ
//��������1234  ���1 2 3 4*/
//#include <stdio.h>
//
//void print(unsigned int nums)
//{
//	if (nums > 9)
//	{
//		print(nums / 10);
//	}
//	printf("%u ", nums % 10);
//}
//
//int main()
//{
//	unsigned int num;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

///*2.��д������������ʱ���������ַ������ȣ���д���ǵݹ�*/
//#include <stdio.h>
//
//int my_strlen(char* str)  //�ݹ�
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else return 0;
//}
//int my_strlen(char* str)  //�ǵݹ�
//{
//	int count = 0;
//	for (; *str != '\0'; ++str)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "Hello world!";
//	int len = my_strlen(arr);
//	printf("�ַ�������Ϊ%d", len);
//	return 0;
//}

/*3.�ݹ�����ŵ�����⣬������̨����*/

///*4.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���*/
//#include <stdio.h>
//
//void print_net_table(int nums)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= nums; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%-2d=%-3d |", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print_net_table(num);
//	return 0;
//}

///*5.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ����������������)*/
//#include <stdio.h>
//
//int fac(int nums)  //�ݹ�
//{
//	if (1 == nums)
//		return 1;
//	else
//		return nums * fac(nums - 1);
//}
//int fac(int nums)  //�ǵݹ�
//{
//	int fac_nums = 1;
//	while (nums >= 1)
//	{
//		fac_nums = nums * fac_nums;
//		nums--;
//	}
//	return fac_nums;
//}
//
//
//int main()
//{
//	int n = 0;
//	int fac_num = 0;
//	scanf("%d", &n);
//	fac_num = fac(n);
//	printf("%d", fac_num);
//	return 0;
//}

///*6.��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//����:char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba*/
//#include <stdio.h>
//#include <string.h>
//
//void reverse_string(char* string)
//{
//	int len = strlen(string);
//	char temp = 0;
//	temp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (strlen(string + 1) > 1)
//		reverse_string(string + 1);
//	*(string + len - 1) = temp;
//}
//
//int main()
//{
//	char arr[] = "123789";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

///*7.дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
//���룺1729�������19*/
//#include <stdio.h>
//
//int DigitSum(int n)
//{
//	if (n <= 9)
//		return n;
//	return (n % 10) + DigitSum(n / 10);
//}
//int main()
//{
//	int num = 0;
//	int DigitSum_num = 0;
//	scanf("%d", &num);
//	DigitSum_num = DigitSum(num);
//	printf("%d", DigitSum_num);
//	return 0;
//}

///*8.��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�*/
//#include <stdio.h>
//
//int pow(int nums, int k_nums)
//{
//	if (0 == k_nums)
//		return 1;
//	if (k_nums >= 1)
//		return nums * pow(nums, k_nums - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int pow_num = 0;
//	scanf("%d %d", &n, &k);
//	pow_num = pow(n, k);
//	printf("%d", pow_num);
//	return 0;
//}

///*9.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55*/
//#include <stdio.h>
//
//int Fib(int nums)  //�ݹ�
//{
//	if ((1 == nums) || (2 == nums))
//		return 1;
//	else
//		return Fib(nums - 1) + Fib(nums - 2);
//}
//int Fib(int nums)  //�ǵݹ�
//{
//	int a = 1, b = 1, c = 2;
//	if ((1 == nums) || (2 == nums))
//		return 1;
//	while ((nums - 2) > 0)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		nums--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	int fib_num = 0;
//	scanf("%d", &n);
//	fib_num = Fib(n);
//	printf("%d", fib_num);
//	return 0;
//}

///*ʵ��һ�������������ð������*/
//#include <stdio.h>
//
//void bubble_sort(int arr[10], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 1; j < sz - i; j++)
//		{
//			if (arr[j - 1] > arr[j])
//			{
//				int tmp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 7,4,1,8,5,2,9,6,3,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("befor sort:");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	bubble_sort(arr, sz);
//	printf("\nafter sort:");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/*����һ���������飬��ɶ�����Ĳ���
ʵ�ֺ���init() ��ʼ������Ϊȫ0
ʵ��print()  ��ӡ�����ÿ��Ԫ��
ʵ��reverse()  �����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ��*/

///*������A�е����ݺ�����B�е����ݽ��н�����������һ����*/
//#include <stdio.h>
//
//void swap_array(int* arrA, int* arrB, int szAB)
//{
//	int tmp = 0;
//	for (int i = 0; i < szAB; i++)
//	{
//		tmp = arrA[i];
//		arrA[i] = arrB[i];
//		arrB[i] = tmp;
//	}
//}
//
//int main()
//{
//	int szAB = 0;
//	int arrA[5] = { 1,2,3,4,5 };
//	int szA = sizeof(arrA) / sizeof(arrA[0]);
//	int arrB[5] = { 5,4,3,2,1 };
//	int szB = sizeof(arrB) / sizeof(arrB[0]);
//	printf("befor swap:\n");
//	printf("arrA[5]:");
//	for (int i = 0; i < szA; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("\narrN[5]:");
//	for (int i = 0; i < szB; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//	if (szA == szB)
//	{
//		szAB = szA;
//	}
//	swap_array(arrA, arrB, szAB);
//	printf("\n\nafter swap:\n");
//	printf("arrA[5]:");
//	for (int i = 0; i < szA; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("\narrN[5]:");
//	for (int i = 0; i < szB; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//	return 0;
//}

///*��һ����������(�������ظ�������)����ɾ��ָ����ĳһ�������������ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
//���ݷ�Χ:���г��Ⱥ������е�ֵ������ 1 ��n�� 50
//����:6
//	 1 2 3 4 5 9
//	 4
//���:1 2 3 5 9*/
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int num[50] = { 0 };
//	int i = 0;//������ѭ���п���ѭ������
//	scanf("%d", &n);//����n��ֵ
//	//������n����������
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	//����Ҫɾ����λ��m��ֵ
//	scanf("%d", &m);
//	//ɾ����mλ�����֣�������������Ԫ�ذ�˳����ǰ�ƶ�
//	for (i = m; i < n - 1; i++)
//	{
//		num[i] = num[i + 1];
//	}
//	//���ɾ���˵�mλ���ֵ�����	
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

///*����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
//��������:
//	���У���һ��Ϊn����ʾn���ɼ����������10000.
//	�ڶ���Ϊn���ɼ�(������ʾ����Χ0~100)���Կո����
//�������:
//	һ�У����n���ɼ�����߷�������ͷ����Ĳ
//��:
//����:10
//	 98 100 99 97 95 99 98 97 96 100
//���:5*/
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;//��ʼ���洢�ɼ������ı���
//	int score[10000] = { 0 };//��ʼ���洢�ɼ������飬���ɴ�10000��
//	int i = 0;//���ñ���������ѭ���п���ѭ������
//	//����洢�ɼ������ı���n
//	scanf("%d", &n);
//	//����n���ɼ�������score��
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	//�ҵ����ֵ����Сֵ���������ǵĲ�
//	int max = 0;//�洢���ֵ�ı���,����ʼ��һ���ɼ���Χ�ڵ���Сֵ
//	int min = 100;//�洢��Сֵ�ı���,����ʼ��һ���ɼ���Χ�ڵ����ֵ
//	int D_value = 0;//��ʼ��һ���洢��ֵ�ı���
//	for (i = 0; i < n; i++)
//	{
//		if (score[i] > max)
//			max = score[i];
//		if (score[i] < min)
//			min = score[i];
//	}
//	D_value = max - min;//�����ֵ
//	printf("%d", D_value);//�����ֵ
//	return 0;
//}

///*KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ;��֮��ת��Ϊ��д��ĸ��
//��������:
//	�������룬ÿһ������һ����ĸ��
//�������:
//	���ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ��
//��
//���룺a
//	  A
//	  Z
//�����A
//	  a
//	  z*/
//#include<stdio.h>
//
//#define MAX_LENGTH 100//�����������󳤶�
//
//int main()
//{
//	char liter[MAX_LENGTH] = { 0 };//��ʼ��һ�����鳤�Ƚϴ�������Դ����洢�������ĸ
//	int count = 0;//ͳ�������˶��ٸ���ĸ
//	//������ĸ
//	for (int i = 0; i < MAX_LENGTH; i++)
//	{
//		scanf("%c", &liter[i]);
//		if (!(liter[i] > 65 && liter[i] < 90) || (liter[i] > 97 && liter[i] < 122))
//			break;
//		count++;
//	}
//	//ת����ĸ
//	for (int i = 0; i < count; i++)
//	{
//		if (liter[i] > 65 && liter[i] < 90)
//			liter[i] += 32;
//		if (liter[i] > 97 && liter[i] < 122)
//			liter[i] -= 32;
//	}
//	//���ת�������ĸ
//	for (int i = 0; i < count; i++)
//	{
//		printf("%c\n", liter[i]);
//	}
//	return 0;
//}

/*����
KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�
��������:
	�������룬ÿһ������һ���ַ���
�������:
	���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������
��
����:A
	 6
���:A is an alphabet.
	 6 is not an alphabet.*/


/*����
KiKi�μ������ġ���ѧ������Ŀ��ԣ�������ж������е���߷֡��Ӽ���������������������ʾ�ķ���������ж����е���߷֡�
���ݷ�Χ:0��n��100
��������:
	����һ�а�������������ʾ�ķ���(0~100)���ÿո�ָ���
�������:
	���Ϊһ�У������������е���߷֡�
��
����:94 98 99
���:99*/


/*����
����ˮ�ɻ���-Lily Number:����������֣����м��ֳ��������֣�����1461���Բ�ֳ�(1��461)��(14��61)��(146��1),������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
����:
655=6*55+65*5
1461=1*461+14*61+146*1
���5λ���е����� Lily Number��
��������:
	��
�������:
	һ�У�5λ���е����� Lily Number��ÿ������֮����һ���ո�*/

///*���ڸ�������Сд��ĸ�Ϳո��Ϲ��ɵ��ַ��� s �����䷭ת�������
//��֤�������ַ��� s ����β��Ϊ�ո�
//��������:
//	��һ��������һ������Ϊ 1�Qlen(s)�Q1�Qlen(s)�Q10000 ����Сд��ĸ�Ϳո��Ϲ��ɵ��ַ���s��
//�������:
//	���һ���ַ�������ʾ�������ַ��� s ��ת��Ľ����
//ʾ��1
//����
//	hello nowcoder
//���
//	redocwon olleh*/
//#include <stdio.h>
//#include <string.h>
//
//void Reverse_Str(char str[], int left, int right)
//{
//	int temp = 0;//����һ����ʱ�������ڽ������������Ԫ��
//	//������i + 1��Ԫ�غ͵�sz��Ԫ�ص�����
//	temp = str[left];
//	str[left] = str[right - 1];
//	str[right - 1] = temp;
//	//�ݹ�
//	if ((right - 1) - (left + 1) > 1)
//		Reverse_Str(str, left + 1, right - 1);
//}
//
//int main() {
//	char str[10000] = { 0 };
//	int i = 0;
//	char ch = 0;//ÿ��������ݴ����
//	//����
//	while ((ch = getchar()) != '\n')
//	{
//		str[i] = ch;
//		i++;
//	}
//	str[i] = '\0';//���ַ�����β����/0
//	int right = strlen(str);//���ַ������Ȳ���¼Ϊ�ұߵ�λ��
//	int left = 0;//��¼�ַ�����ߵ�λ��
//	Reverse_Str(str, left, right);
//	//���
//	for (i = 0; i < right; i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}

/*����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���*/
//#include <stdio.h>
//
//int main()
//{
//	int money = 20;//Ǯ������
//	int drink = 0;//��ˮ������
//	int bottle = 0;//��ƿ������
//	while (money)
//	{
//		
//		money--;//����һԪ
//		drink++;//���һƿ��ˮ
//		bottle++;//���һ����ƿ
//	}
//	//����������ƿ��ƿ�ӻ�����ˮ
//	while (bottle >= 2)
//	{
//		bottle -= 2;//��������ƿ
//		drink++;//���һƿ��ˮ
//		bottle++;//���һ����ƿ
//	}
//	printf("%d", drink);//���
//	return 0;
//}

/*��C��������Ļ���������ͼ��������*/
//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 13; i++)
//	{
//		if (i < 7)
//		{
//			for (int j = 1; j <= (7 - i); j++)
//				printf(" ");
//			for (int j = 1; j <= (1 + (2 * (i - 1))); j++)
//				printf("*");
//			for (int j = 1; j <= (7 - i); j++)
//				printf(" ");
//			printf("\n");
//		}
//		else
//		{
//			for (int j = 1; j <= (i - 7); j++)
//				printf(" ");
//			for (int j = 1; j <= (1 + (2 * (13 - i))); j++)
//				printf("*");
//			for (int j = 1; j <= (i - 7); j++)
//				printf(" ");
//			printf("\n");
//		}
//	}
//	return 0;
//}

///*KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
//����������
//    �������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
//���������
//    ���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
//��
//���룺
//    2008 2
//�����
//    29*/
//#include <stdio.h>
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        int isLeap = 0;//�����������꣬�ñ���Ϊ1��������Ϊ0
//        //�ж��Ƿ�Ϊ����
//        if (((year % 4) || (!(year % 100)) && (year % 400)))
//            isLeap = 0;//���겻������
//        else
//            isLeap = 1;//����������
//        //�ж��·ݶ�Ӧ������
//        if (2 == month)//����ʱ
//        {
//            if (isLeap)//����
//                printf("29\n");
//            else
//                printf("28\n");
//        }
//        else if ((((month % 2)) && (month <= 7)) || (!(month % 2) && (month >= 8)))
//            printf("31\n");
//        else
//            printf("30\n");
//    }
//    return 0;
//}

///*KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//����������
//	��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0<a,b,c<1000)����Ϊ�����ε������ߣ��ÿո�ָ���
//���������
//	���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����
//��
//���룺
//	2 3 2
//	3 3 3
//�����
//	Isosceles triangle!
//	Equilateral triangle!*/
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        //�������ߵ����ֵ����a
//        int temp = 0;
//        if (b > c);
//        else
//        {
//            temp = b;
//            b = c;
//            c = temp;
//        }
//        if (a > b);
//        else
//        {
//            temp = a;
//            a = b;
//            b = temp;
//        }
//        //�ж��Ƿ�Ϊ������
//        if ((b + c) > a)
//        {
//            //�ж��Ƿ�Ϊ�ȱ�������
//            if ((a == b) && (a == c) && (b == c))
//                printf("Equilateral triangle!\n");
//            //�ж��Ƿ�Ϊ����������
//            else if ((a == b) || (a == c) || (b == c))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}

///*��������ż��˳��
//	��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//	����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�*/
//#include <stdio.h>
//
//int main()
//{
//	int num[10] = { 2,4,3,2,5,8,3,6,9,5 };
//	//������������left��right������������ָ���Ԫ�ش����������Ŀ�ʼ����
//	int left = 0;
//	int right = (sizeof(num) / sizeof(num[0])) - 1;
//	int temp = 0;
//	while (left < right)
//	{
//		//������ҵ�ż��ʱ
//		if (0 == (num[left] % 2))
//		{
//			//�ҵ������ұ����һ������
//			while (1 != (num[right] % 2))
//			{
//				right--;
//				if (left == right)//��left��right����������������ѭ��
//					break;
//			}
//			temp = num[left];
//			num[left] = num[right];
//			num[right] = temp;
//		}
//		left++;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

///*ģ��ʵ�ֿ⺯��strlen*/
//#include <stdio.h>
//
//int my_strlen(const char str[])
//{
//	int i = 0;
//	int count = 0;//�����ж��ٸ���ĸ
//	while (str[i])
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char string[] = "Hello World!";
//	int len = my_strlen(string);
//	printf("%s's strlen = %d", string, len);
//	return 0;
//}

///*ģ��ʵ�ֿ⺯��strcpy*/
//#include <stdio.h>
//
//char* my_strcpy(char paste[], const char copy[])
//{
//	char* paste_1 = paste;
//	while (*paste++ = *copy++);
//	return paste_1;
//}
//
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[] = "Hello World!";
//	printf("1:%s\n", str1);
//	printf("2:%s\n", my_strcpy(str1, str2));
//	printf("3:%s\n", str1);
//
//	return 0;
//}

///*��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing. �����������Ϊ��beijing. like I
//��������:
//    ÿ�������������1������������ I like beijing. �����������Ȳ�����100
//�������:
//    �����������֮����ַ���,�Կո�ָ�
//��1
//����
//    I like beijing.
//���
//    beijing. like I*/
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[101] = { 0 };
//    char str_copy[101] = { 0 };//����һ������������������ԭ����
//    int i = 0;
//    int j = 0;
//    char ch = 0;
//    //�����ַ�
//    while ((ch = getchar()) != '\n')
//    {
//        str[i] = ch;
//        i++;
//    }
//    str[i] = '\0';//���Ͻ�β�ı�־
//    strcpy(str_copy, str);//���������ݸ��Ƶ�������
//    int len = strlen(str_copy);//����������ַ�����
//    //����
//    int left = len - 1;//����һ��������¼һ�����ʵ���ߵ�λ���±�
//    int right = len - 1;//����һ��������¼һ�����ʵ��ұߵ�λ���±�
//    int word_len = 1;//��¼���ʵĳ���
//    int swap_len = 0;//��¼�Ѿ������˶��ٸ���ĸ�����ո�
//    while (left >= 0)
//    {
//        if (str_copy[left - 1] == ' ' || 0 == left)//�ҵ����ʵļ��
//        {
//            j = 0;
//            for (i = left; i <= right; i++)//�������鵥������
//            {
//                str[swap_len + j] = str_copy[left + j];
//                j++;
//            }
//            if (left)
//                str[swap_len + word_len] = ' ';//���������һ������ʱ���Ͽո�
//            swap_len = swap_len + word_len + 1;//���½����˶��ٸ���ĸ
//            //����left��right
//            right = left - 2;
//            left = right + 1;
//            word_len = 0;//���ʳ��ȸ���Ϊ1
//        }
//        left--;//��ָ��������
//        word_len++;//���ʳ���+1
//    }
//    str[swap_len] = '\0';//���Ͻ�β�ı�־
//    printf("%s", str);
//    return 0;
//}

///*���ڸ���������������,�����ǵ���С������*/
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int lcm = 0;//��С������
//    scanf("%d %d", &a, &b);
//    //��lcmΪa,b�������Ǹ���
//    lcm = (a > b) ? a : b;
//    while (1)
//    {
//        if (((lcm % a) == 0) && ((lcm % b) == 0))
//            break;
//        lcm++;
//    }
//    printf("%d", lcm);
//    return 0;
//}

///*����Ļ�ϴ�ӡ������ǡ�*/
//#include <stdio.h>
//
//int YangHui_Triangle_Num(int x, int y)
//{
//	if (0 == x)//��x����Ϊ0ʱ��λ���ǿյģ�����0
//		return 0;
//	else if (x > y)//��x�������yʱ��λ���ǿյģ�����0
//		return 0;
//	else if (1 == x && 1 == y)//������Ϊ(1,1)ʱ��λ������Ϊ1
//		return 1;
//	else//ͨ���������������ֵĺ���������ֵ�ֵ
//		return YangHui_Triangle_Num((x - 1), (y - 1)) + YangHui_Triangle_Num(x, (y - 1));
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			int num = YangHui_Triangle_Num(i, j);//����(i,j)�����ϵ�����
//			printf("%2d ", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}

///*������
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�*/
//#include <stdio.h>
//
//int main()
//{
//	char crimer = 0;
//	char A_confession = 'a';//Сд��ĸa��ʾ���ֲ���A
//	int A = 0;//A�Ĺ���,0Ϊ�٣�1Ϊ��
//	char B_confession = 'C';//��д��ĸC��ʾ������C
//	int B = 0;//B�Ĺ���,0Ϊ�٣�1Ϊ��
//	char C_confession = 'D';//��д��ĸD��ʾ������D
//	int C = 0;//C�Ĺ���,0Ϊ�٣�1Ϊ��
//	int D = 0;//D�Ĺ���,0Ϊ�٣�1Ϊ��
//	for (crimer = 'A'; crimer < 'E'; crimer++)//�����ּ����'A'��'D'����
//	{
//		//�ж�A��˵�����
//		if (A_confession - 32 == crimer)
//			A = 0;
//		else
//			A = 1;
//		//�ж�B��˵�����
//		if (B_confession == crimer)
//			B = 1;
//		else
//			B = 0;
//		//�ж�C��˵�����
//		if (C_confession == crimer)
//			C = 1;
//		else
//			C = 0;
//		//�ж�D��˵�����
//		if (C)
//			D = 0;
//		else
//			D = 1;
//		//�ж��Ƿ�Ϊ����һ�٣�����Ϊ3,��������ѭ��
//		if (3 == (A + B + C + D))
//			break;
//		
//	}
//	//�������
//	printf("%c", crimer);
//	return 0;
//}

/*������
5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
Aѡ��˵��B�ڶ����ҵ�����
Bѡ��˵���ҵڶ���E���ģ�
Cѡ��˵���ҵ�һ��D�ڶ���
Dѡ��˵��C����ҵ�����
Eѡ��˵���ҵ��ģ�A��һ��
����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������*/