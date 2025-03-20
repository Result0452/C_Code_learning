#define _CRT_SECURE_NO_WARNINGS

///*计算n的阶乘*/
//#include <stdio.h>
//int main()
//{
//	int fac = 1;
//	int n = 0;
//	scanf("%d", &n);
//	
//	//计算
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

///*交换a,b的值*/
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

///*计算1!+2!+3!+...+10!*/
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

///*计算1!+2!+3!+...+10!的另一种方法*/
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

///*通过折半查找寻找有序数组里的某个数的位置*/
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

///*实现字从两边逐渐向中间靠拢*/
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

///*在三次内输入账号和密码*/
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

///*猜数字的小游戏*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define RANG 100 //设置猜数字的范围
//
////菜单界面显示
//void menu()
//{
//	printf("+-------------+\n");
//	printf("|   1. play   |\n");
//	printf("|   0. exit   |\n");
//	printf("+-------------+\n");
//	printf("是否玩游戏:>");
//}
//
////游戏过程
//void play()
//{
//	//生成随机数
//	int num = rand() % RANG + 1;
//	int i = 0;
//
//	//判断数字
//	do
//	{
//		i = 0;
//		printf("请猜数字的大小(1至%d):>", RANG);
//		if (1 != (scanf("%d", &i)))
//		{
//			printf("输入的不是数字，请重新输入\n");
//			int c;
//			while ((c = getchar()) != '\n' && c != EOF);
//			continue;
//		}
//		if (i > num)
//			printf("猜大了，");
//		else if (i < num)
//			printf("猜小了，");
//		else
//			printf("猜对了！数字就是%d！\n", num);
//	} 
//	while (i != num);
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //利用时间戳生成一个随机数rand的种子
//
//	//菜单和游戏
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
//			printf("\n退出游戏");
//		else
//			printf("\n输入错误，请重新输入\n");*/
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
//				printf("\n退出游戏");
//				break;
//			}
//			default:
//			{
//				printf("\n输入错误，请重新输入\n");
//				break;
//			}
//
//		}
//	} 
//	while (input);
//}

///*编写程序数一下 1到 100 的所有整数中出现多少个数字9*/
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
//	printf("\n共%d个", count);
//	return 0;
//}

///*计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果*/
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
//			//当num为1时在输出数字前不要有+号
//			if (1 == num)
//			{
//				printf("1/1");
//				sum += 1.0 / num;
//				goto one;  //跳出当前语句，防止再出现一次1/1
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
//	one:;  //one标签，第298行跳转地方
//	}
//
//	printf("=%f", sum);
//}

///*求10 个整数中最大值*/
//#include <stdio.h>
//
//int main()
//{
//	int num[10] = { 0 };
//	int i = 0;
//	int max = 0;
//
//	//通过遍历输入数据
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	printf("输入完毕\n");
//
//	//遍历数据寻找最大值
//	max = num[0];  //max储存遍历得到的最大值
//	for (i = 0; i < 10; i++)
//	{
//		max = max > num[i] ? max : num[i];
//	}
//
//	printf("最大值是%d\n", max);
//	return 0;
//}

///*在屏幕上输出9*9乘法口诀表*/
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
//			printf("%d*%d=%-2d | ", j, i, num); //"%-2d"让num输出占两个字符宽度并左对齐，使输出界面更美观
//		}
//		printf("\n");
//	}
//	return 0;
//}

///*测试输入格式是%d时scanf的返回值*/
//#include <stdio.h>
//int main()
//{
//	start:
//	int ret = 0;
//	char a = 0;
//	ret = scanf("%d", &a);
//	int c;
//	while (c = getchar() != '\n' && c != EOF);
//	printf("ret：%d和a：%d\n", ret, a);
//	goto start;
//}

///*测速仪算法*/
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
//	printf("速度是 %.2f km/h\n", v);
//	return 0;
//}

///*题目二：统计字符串中的数字和字母
//编写程序，实现以下功能：
//1. 用户输入一个字符串（长度不超过100）。
//2. 统计字符串中数字字符（'0' - '9'）和字母字符（'a' - 'z'、'A' - 'Z'）的数量。
//3. 输出统计结果。*/
//
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = { 0 };
//	int i = 0;
//	int num = 0;
//	int cha = 0;
//	printf("请输入字符串：");
//	//scanf("%s", str);
//	fgets(str, sizeof(str), stdin);
//
//	//统计数字字符
//	for (i = 0; i < 100; i++)
//	{
//		if (str[i] == '\0' || str[i] == '\n')
//			break;
//		if (str[i] < 58 && str[i] > 47)
//			num++;
//	}
//	//统计字母字符
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
//	printf("数字字符数量：%d\n字母字符数量：%d\n", num, cha);
//	return 0;
//}

///*题目四：矩阵对角线求和
//编写程序，实现以下功能：
//1. 用户输入一个 3x3 的整数矩阵。
//2. 计算并输出矩阵两条对角线元素之和（主对角线和副对角线）。*/
//
//#include <stdio.h>
//
//int main()
//{
//	int num[9] = { 0 };
//	int num1 = 0;
//	int num2 = 0;
//	int i = 0;
//	printf("请输入3×3矩阵：\n");
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &num[i]);
//
//	}
//	num1 = num[0] + num[4] + num[8];
//	num2 = num[2] + num[4] + num[6];
//	printf("主对角线之和：%d\n副对角线之和：%d\n", num1, num2);
//	return 0;
//}

///*题目五：简单计算器**
//编写程序，实现一个支持加减乘除的简易计算器：  
//1. 用户输入两个操作数和一个运算符（+、-、*、/）。  
//2. 根据运算符计算结果并输出。  
//3. 处理除数为零的情况，提示“错误：除数不能为零”。  */
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
//			printf("错误：除数不能为零");
//			break;
//		}
//		printf("%.2f", num);
//		break;
//	}
//
//	return 0;
//}

/*给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数
是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

例如，121 是回文，而 123 不是。*/

///*给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
//回文数:是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。*/
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

///*题目要求：编写一个程序，找出给定数组中的最大值和次大值。
//示例数组：
//输入：1 5 3 7 9
//输出：最大值是 9，次大值是 7。*/
//
//#include <stdio.h>
//#define MAX_NUM_Lenth 100
//int main()
//{
//	int num[MAX_NUM_Lenth] = { 0 };  //假定最多只有MAX_NUM_Lenth个元素
//	int max_num = 0;
//	int sec_max_num = 0;
//	int sz = 0;
//	//输入数组数据
//	for (int i = 0; i < MAX_NUM_Lenth; i++)
//	{
//		scanf("%d", &num[i]);
//		sz++;
//		if (int c = getchar() == '\n')
//		//if (num[i] == EOF)
//			break;
//	}
//
//	//遍历寻找最大值和次大值
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
//	printf("最大值是 %d，次大值是 %d。", max_num, sec_max_num);
//	return 0;
//}

///*题目要求：判断输入的字符串是否为有效的括号序列。
//示例输入：
//“(())”
//“)((()”
//“()”
//输出：
//True, False, True.*/
//
//#include <stdio.h>
//#define MAX_Lenth 100
//
//int main()
//{
//	char sig[MAX_Lenth] = { 0 };//设字符串最大长度为MAX_Lenth
//	int all_sig = 0;
//	for (int i = 0; i < MAX_Lenth; i++)
//	{
//		scanf("%c", &sig[i]);
//		if (sig[i] == '\n')
//		{
//			if (0 == i)
//			{
//				printf("未输入符号");
//				return -1;
//			}
//			break;
//		}
//		if (sig[i] != '(' && sig[i] != ')')
//		{
//			printf("输入了非法字符");
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

///*写一个函数找出最大值*/
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

///*写一个函数交换两个整型函数的内容*/
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

///*写一个函数判断是不是素数*/
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
//		printf("%d是素数", a);
//	else
//		printf("%d不是素数", a);
//	return 0;
//}

///*写一个函数判断是不是闰年*/
//#include <stdio.h>
//
//void Is_Leap(int year)
//{
//	if ((0 == year % 4 && year % 100 != 0) || 0 == year % 400)
//		printf("%d年是闰年", year);
//	else
//		printf("%d年不是闰年", year);
//}
//
//int main()
//{
//	int years = 0;
//	scanf("%d", &years);
//	Is_Leap(years);
//	return 0;
//}

///*写一个函数打印数字判断是不是奇数*/
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2)
//		printf("%d是奇数", a);
//	else
//		printf("%d是偶数", a);
//	return 0;
//}

///*1.接受一个整形值（无符号），按顺序打印他的每一位
//例：输入1234  输出1 2 3 4*/
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

///*2.编写函数不创建临时变量，求字符串长度，再写个非递归*/
//#include <stdio.h>
//
//int my_strlen(char* str)  //递归
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else return 0;
//}
//int my_strlen(char* str)  //非递归
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
//	printf("字符串长度为%d", len);
//	return 0;
//}

/*3.递归解决汉诺塔问题，青蛙跳台阶问*/

///*4.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表*/
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

///*5.递归和非递归分别实现求n的阶乘（不考虑溢出的问题)*/
//#include <stdio.h>
//
//int fac(int nums)  //递归
//{
//	if (1 == nums)
//		return 1;
//	else
//		return nums * fac(nums - 1);
//}
//int fac(int nums)  //非递归
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

///*6.编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如:char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba*/
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

///*7.写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//输入：1729，输出：19*/
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

///*8.编写一个函数实现n的k次方，使用递归实现。*/
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

///*9.递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55*/
//#include <stdio.h>
//
//int Fib(int nums)  //递归
//{
//	if ((1 == nums) || (2 == nums))
//		return 1;
//	else
//		return Fib(nums - 1) + Fib(nums - 2);
//}
//int Fib(int nums)  //非递归
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

///*实现一个对整形数组的冒泡排序*/
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

/*创建一个整形数组，完成对数组的操作
实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。*/

///*将数组A中的内容和数组B中的内容进行交换。（数组一样大）*/
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

///*有一个整数序列(可能有重复的整数)，现删除指定的某一个整数，输出除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//数据范围:序列长度和序列中的值都满足 1 ≤n≤ 50
//输入:6
//	 1 2 3 4 5 9
//	 4
//输出:1 2 3 5 9*/
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int num[50] = { 0 };
//	int i = 0;//用于在循环中控制循环次数
//	scanf("%d", &n);//输入n的值
//	//输入有n个数的序列
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	//输入要删除的位置m的值
//	scanf("%d", &m);
//	//删除第m位的数字，并将数组后面的元素按顺序向前移动
//	for (i = m; i < n - 1; i++)
//	{
//		num[i] = num[i + 1];
//	}
//	//输出删除了第m位数字的序列	
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

///*输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//输入描述:
//	两行，第一行为n，表示n个成绩，不会大于10000.
//	第二行为n个成绩(整数表示，范围0~100)，以空格隔开
//输出描述:
//	一行，输出n个成绩中最高分数和最低分数的差。
//例:
//输入:10
//	 98 100 99 97 95 99 98 97 96 100
//输出:5*/
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;//初始化存储成绩个数的变量
//	int score[10000] = { 0 };//初始化存储成绩的数组，最大可存10000个
//	int i = 0;//设置变量用于在循环中控制循环次数
//	//输入存储成绩个数的变量n
//	scanf("%d", &n);
//	//输入n个成绩到数组score中
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	//找到最大值和最小值并计算它们的差
//	int max = 0;//存储最大值的变量,并初始化一个成绩范围内的最小值
//	int min = 100;//存储最小值的变量,并初始化一个成绩范围内的最大值
//	int D_value = 0;//初始化一个存储差值的变量
//	for (i = 0; i < n; i++)
//	{
//		if (score[i] > max)
//			max = score[i];
//		if (score[i] < min)
//			min = score[i];
//	}
//	D_value = max - min;//计算差值
//	printf("%d", D_value);//输出差值
//	return 0;
//}

///*KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母;反之则转换为大写字母。
//输入描述:
//	多组输入，每一行输入一个字母。
//输出描述:
//	针对每组输入，输出单独占一行，输出字母的对应形式。
//例
//输入：a
//	  A
//	  Z
//输出：A
//	  a
//	  z*/
//#include<stdio.h>
//
//#define MAX_LENGTH 100//定义数组的最大长度
//
//int main()
//{
//	char liter[MAX_LENGTH] = { 0 };//初始化一个数组长度较大的数组以此来存储输入的字母
//	int count = 0;//统计输入了多少个字母
//	//输入字母
//	for (int i = 0; i < MAX_LENGTH; i++)
//	{
//		scanf("%c", &liter[i]);
//		if (!(liter[i] > 65 && liter[i] < 90) || (liter[i] > 97 && liter[i] < 122))
//			break;
//		count++;
//	}
//	//转换字母
//	for (int i = 0; i < count; i++)
//	{
//		if (liter[i] > 65 && liter[i] < 90)
//			liter[i] += 32;
//		if (liter[i] > 97 && liter[i] < 122)
//			liter[i] -= 32;
//	}
//	//输出转换后的字母
//	for (int i = 0; i < count; i++)
//	{
//		printf("%c\n", liter[i]);
//	}
//	return 0;
//}

/*描述
KiKi想判断输入的字符是不是字母，请帮他编程实现。
输入描述:
	多组输入，每一行输入一个字符。
输出描述:
	针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。
例
输入:A
	 6
输出:A is an alphabet.
	 6 is not an alphabet.*/


/*描述
KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
数据范围:0≤n≤100
输入描述:
	输入一行包括三个整数表示的分数(0~100)，用空格分隔。
输出描述:
	输出为一行，即三个分数中的最高分。
例
输入:94 98 99
输出:99*/


/*描述
变种水仙花数-Lily Number:把任意的数字，从中间拆分成两个数字，比如1461可以拆分成(1和461)，(14和61)，(146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
例如:
655=6*55+65*5
1461=1*461+14*61+146*1
求出5位数中的所有 Lily Number。
输入描述:
	无
输出描述:
	一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。*/

///*对于给定的由小写字母和空格混合构成的字符串 s ，将其翻转后输出。
//保证给定的字符串 s 的首尾不为空格。
//输入描述:
//	在一行上输入一个长度为 1≦len(s)≦1≦len(s)≦10000 、由小写字母和空格混合构成的字符串s。
//输出描述:
//	输出一个字符串，表示将输入字符串 s 翻转后的结果。
//示例1
//输入
//	hello nowcoder
//输出
//	redocwon olleh*/
//#include <stdio.h>
//#include <string.h>
//
//void Reverse_Str(char str[], int left, int right)
//{
//	int temp = 0;//创建一个临时变量用于交换两个数组的元素
//	//交换第i + 1个元素和第sz个元素的内容
//	temp = str[left];
//	str[left] = str[right - 1];
//	str[right - 1] = temp;
//	//递归
//	if ((right - 1) - (left + 1) > 1)
//		Reverse_Str(str, left + 1, right - 1);
//}
//
//int main() {
//	char str[10000] = { 0 };
//	int i = 0;
//	char ch = 0;//每次输入的暂存变量
//	//输入
//	while ((ch = getchar()) != '\n')
//	{
//		str[i] = ch;
//		i++;
//	}
//	str[i] = '\0';//给字符串结尾加上/0
//	int right = strlen(str);//求字符串长度并记录为右边的位置
//	int left = 0;//记录字符串左边的位置
//	Reverse_Str(str, left, right);
//	//输出
//	for (i = 0; i < right; i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}

/*喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。*/
//#include <stdio.h>
//
//int main()
//{
//	int money = 20;//钱的数量
//	int drink = 0;//汽水的数量
//	int bottle = 0;//空瓶的数量
//	while (money)
//	{
//		
//		money--;//花费一元
//		drink++;//获得一瓶汽水
//		bottle++;//获得一个空瓶
//	}
//	//大于两个空瓶把瓶子换成汽水
//	while (bottle >= 2)
//	{
//		bottle -= 2;//少两个空瓶
//		drink++;//获得一瓶汽水
//		bottle++;//获得一个空瓶
//	}
//	printf("%d", drink);//输出
//	return 0;
//}

/*用C语言在屏幕上输出以下图案：菱形*/
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

///*KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：
//    多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//    针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
//例
//输入：
//    2008 2
//输出：
//    29*/
//#include <stdio.h>
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        int isLeap = 0;//若当年是闰年，该变量为1，不是则为0
//        //判断是否为闰年
//        if (((year % 4) || (!(year % 100)) && (year % 400)))
//            isLeap = 0;//当年不是闰年
//        else
//            isLeap = 1;//当年是闰年
//        //判断月份对应的天数
//        if (2 == month)//二月时
//        {
//            if (isLeap)//闰年
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

///*KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：
//	题目有多组输入数据，每一行输入三个a，b，c(0<a,b,c<1000)，作为三角形的三个边，用空格分隔。
//输出描述：
//	针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
//例
//输入：
//	2 3 2
//	3 3 3
//输出：
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
//        //把三条边的最大值赋给a
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
//        //判断是否为三角形
//        if ((b + c) > a)
//        {
//            //判断是否为等边三角形
//            if ((a == b) && (a == c) && (b == c))
//                printf("Equilateral triangle!\n");
//            //判断是否为等腰三角形
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

///*调整奇数偶数顺序
//	调整数组使奇数全部都位于偶数前面。
//题目：
//	输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。*/
//#include <stdio.h>
//
//int main()
//{
//	int num[10] = { 2,4,3,2,5,8,3,6,9,5 };
//	//设置两个变量left和right让这两个变量指向的元素从两边向中心开始交换
//	int left = 0;
//	int right = (sizeof(num) / sizeof(num[0])) - 1;
//	int temp = 0;
//	while (left < right)
//	{
//		//当左边找到偶数时
//		if (0 == (num[left] % 2))
//		{
//			//找到从最右边起第一个奇数
//			while (1 != (num[right] % 2))
//			{
//				right--;
//				if (left == right)//若left与right即将逆序则跳出该循环
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

///*模拟实现库函数strlen*/
//#include <stdio.h>
//
//int my_strlen(const char str[])
//{
//	int i = 0;
//	int count = 0;//计数有多少个字母
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

///*模拟实现库函数strcpy*/
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

///*将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I
//输入描述:
//    每个测试输入包含1个测试用例： I like beijing. 输入用例长度不超过100
//输出描述:
//    依次输出倒置之后的字符串,以空格分割
//例1
//输入
//    I like beijing.
//输出
//    beijing. like I*/
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[101] = { 0 };
//    char str_copy[101] = { 0 };//创立一个副本数组以来保存原数组
//    int i = 0;
//    int j = 0;
//    char ch = 0;
//    //输入字符
//    while ((ch = getchar()) != '\n')
//    {
//        str[i] = ch;
//        i++;
//    }
//    str[i] = '\0';//加上结尾的标志
//    strcpy(str_copy, str);//将数组内容复制到副本中
//    int len = strlen(str_copy);//计算数组的字符长度
//    //交换
//    int left = len - 1;//创建一个变量记录一个单词的左边的位置下标
//    int right = len - 1;//创建一个变量记录一个单词的右边的位置下标
//    int word_len = 1;//记录单词的长度
//    int swap_len = 0;//记录已经交换了多少个字母（含空格）
//    while (left >= 0)
//    {
//        if (str_copy[left - 1] == ' ' || 0 == left)//找到单词的间隔
//        {
//            j = 0;
//            for (i = left; i <= right; i++)//交换数组单词内容
//            {
//                str[swap_len + j] = str_copy[left + j];
//                j++;
//            }
//            if (left)
//                str[swap_len + word_len] = ' ';//当不是最后一个单词时加上空格
//            swap_len = swap_len + word_len + 1;//更新交换了多少个字母
//            //更新left和right
//            right = left - 2;
//            left = right + 1;
//            word_len = 0;//单词长度更新为1
//        }
//        left--;//左指针向左移
//        word_len++;//单词长度+1
//    }
//    str[swap_len] = '\0';//加上结尾的标志
//    printf("%s", str);
//    return 0;
//}

///*对于给定的两个正整数,求它们的最小公倍数*/
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int lcm = 0;//最小公倍数
//    scanf("%d %d", &a, &b);
//    //令lcm为a,b中最大的那个数
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

///*在屏幕上打印杨辉三角。*/
//#include <stdio.h>
//
//int YangHui_Triangle_Num(int x, int y)
//{
//	if (0 == x)//当x坐标为0时该位置是空的，返回0
//		return 0;
//	else if (x > y)//当x坐标大于y时该位置是空的，返回0
//		return 0;
//	else if (1 == x && 1 == y)//当坐标为(1,1)时该位置数字为1
//		return 1;
//	else//通过求上面两个数字的和求出该数字的值
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
//			int num = YangHui_Triangle_Num(i, j);//计算(i,j)坐标上的数字
//			printf("%2d ", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}

///*猜凶手
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。*/
//#include <stdio.h>
//
//int main()
//{
//	char crimer = 0;
//	char A_confession = 'a';//小写字母a表示凶手不是A
//	int A = 0;//A的供词,0为假，1为真
//	char B_confession = 'C';//大写字母C表示凶手是C
//	int B = 0;//B的供词,0为假，1为真
//	char C_confession = 'D';//大写字母D表示凶手是D
//	int C = 0;//C的供词,0为假，1为真
//	int D = 0;//D的供词,0为假，1为真
//	for (crimer = 'A'; crimer < 'E'; crimer++)//把凶手假设从'A'到'D'遍历
//	{
//		//判断A所说的真假
//		if (A_confession - 32 == crimer)
//			A = 0;
//		else
//			A = 1;
//		//判断B所说的真假
//		if (B_confession == crimer)
//			B = 1;
//		else
//			B = 0;
//		//判断C所说的真假
//		if (C_confession == crimer)
//			C = 1;
//		else
//			C = 0;
//		//判断D所说的真假
//		if (C)
//			D = 0;
//		else
//			D = 1;
//		//判断是否为三真一假，即和为3,是则跳出循环
//		if (3 == (A + B + C + D))
//			break;
//		
//	}
//	//输出凶手
//	printf("%c", crimer);
//	return 0;
//}

/*猜名次
5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次*/