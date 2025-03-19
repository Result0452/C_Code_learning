#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("+--------------+\n");
	printf("|    1.PLAY    |\n");
	printf("|    0.EXIT    |\n");
	printf("+--------------+\n");
}

int main()
{
	srand((unsigned int)time(NULL)); //����ʱ��������������
	int input = 0;  //����input�Խ��в˵�����
	char ret = 'C';  //�����ж��Ƿ��ʤ�ķ���ֵ�ĺ�������
	
	//�ж��Ƿ�����Ϸ
	do
	{
		//����˵�����
		menu();
		printf("�Ƿ����������壺>");
		scanf("%d", &input);
		//����1ʱ����Ϸ
		if (1 == input)
		{
			//�������ʼ����������
			char board[ROW][COL] = { 0 };//����
			//��ʼ����������ʹ����Ԫ�س�ʼΪ�ո�
			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					board[i][j] = ' ';
				}
			}

			//��ӡ����
			printf("\n");  //�������ӿɶ���
			PrintBoard(board, ROW, COL);

			//����
			do
			{
				//��Ҳ���,retΪCʱ�Ų���
				if (ret == 'C')
				{
					PlayerMove(board, ROW, COL);
					printf("���������:\n");
					PrintBoard(board, ROW, COL);  //��ӡ����
					printf("\n");  //�������ӿɶ���
					ret = IsWin(board, ROW, COL);  //�ж��Ƿ��ʤ
				}

				//���Բ���,retΪCʱ�Ų���
				if (ret == 'C')
				{
					ComputerMove(board, ROW, COL);
					printf("����������:\n");
					PrintBoard(board, ROW, COL);  //��ӡ����
					printf("\n");  //�������ӿɶ���
					ret = IsWin(board, ROW, COL);  //�ж��Ƿ��ʤ
				}
				
				//�ж�retֵ����ΪO����һ�ʤ��XΪ���Ի�ʤ��DΪƽ�֣�CΪ����
				//retΪOʱ
				if ('O' == ret)
				{
					printf("��ϲ�㣡���ʤ�ˣ�\n");
					PrintBoard(board, ROW, COL);  //��ӡ����
					printf("\n");  //�������ӿɶ���
					break;
				}
				else if ('X' == ret)
				{
					printf("��ϧ�ˣ�������\n");
					PrintBoard(board, ROW, COL);  //��ӡ����
					printf("\n");  //�������ӿɶ���
					break;
				}
				else if ('D' == ret)
				{
					printf("���ƽ�ֿ�\n");
					printf("\n");  //�������ӿɶ���
					break;
				}
			} while (1);
			
		}

		//����2ʱ�˳���Ϸ
		else if (0 == input)
		{
			printf("���������Ϸ������\n\n");
			break;
		}

		//��������ʱ��ʾ����
		else
			printf("�����������������\n\n");
	} while (input);
	return 0;
}