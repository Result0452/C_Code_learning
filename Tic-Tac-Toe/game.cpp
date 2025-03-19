#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

/*�����̴�ӡ��������̬
   |   |   
---|---|---
   |   |
---|---|---
   |   |
  */
void PrintBoard (char board[ROW][COL], int rows, int cols)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");
			else
				printf("\n");
		}
		if (i < ROW - 1)
		{
			for (int j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
				else
					printf("\n");
			}
		}
	}
}

//��ҽ��в���,�����á�O����ʾ
void PlayerMove(char board[ROW][COL], int rows, int cols)
{
	int x = 0;  //�������ĺ�����
	int y = 0;  //��������������
	int eff = 1;  //�ж�����������Ƿ���Ч�ı�����1��ѭ���жϣ�0������ѭ��
	printf("��������Ҫ�µ�λ�ã�>");
	do
	{
		scanf("%d %d", &x, &y);
		//���������Ϸ�
		if (x > 0 && x <= ROW && y > 0 && y <= COL)
		{
			//���������λ�ò�����
			if (board[x - 1][y - 1] != ' ')
			{
				printf("�������λ���������ӣ����������룺>");
			}
			//���������λ�ÿ���
			else
			{
				board[x - 1][y - 1] = 'O';
				eff = 0;  //�����������Ч����0����eff������ѭ��
			}
		}
		//���������Ƿ�
		else
		{
			printf("�������λ�ò�����Чλ�ã����������룺>");
		}
	} while (eff);
	
}

//���Խ��в����������á�X����ʾ
void ComputerMove(char board[ROW][COL], int rows, int cols)
{
	Sleep(500);  //��ʱ500ms�ٽ��в�����ģ�����˼���Ĺ���
	int x = 0;  //��������ĺ�����
	int y = 0;  //���������������
	//��������������긳���ֵ
	x = rand() % ROW;
	y = rand() % COL;

	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
		else
		{
			//���¸�������������긳���ֵ
			x = rand() % ROW;
			y = rand() % COL;
		}
	}
}

//�ж��Ƿ�ʤ��,��һ�ʤ�򷵻�O�����Ի�ʤ�򷵻�X��ƽ���򷵻�D��������Ϸ�򷵻�C
int IsWin(char board[ROW][COL], int rows, int cols)
{
	int flag = 0;//����һ������flag���ж��Ƿ�ɹ����ߣ���Ϊ1��ɹ����ߣ�Ϊ0��δ����
	//�ж����Ƿ�ɹ�����
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (board[i][0] != board[i][j])
			{
				flag = 0;
			}
			else if (board[i][j] == ' ')
			{
				flag = 0;
			}
			else
				flag = 1;
			//��flagΪ0����ʾ��һ�����пո���������Ӳ���ȣ�������ѭ���������жϸ�����
			if (flag == 0)
				break;
		}
		if (1 == flag)
		{
			//�ж�˭�ɹ���ʤ
			if (board[i][0] == 'O')
				return board[i][0];  //���Ի�ʤ����O
			else if (board[i][0] == 'X')
				return board[i][0];  //���Ի�ʤ����X
		}
	}

	//�ж����Ƿ�ɹ�����
	for (int j = 0; j < COL; j++)
	{
		for (int i = 0; i < ROW; i++)
		{
			if (board[0][j] != board[i][j])
			{
				flag = 0;
			}
			else if (board[i][j] == ' ')
			{
				flag = 0;
			}
			else
				flag = 1;
			//��flagΪ0����ʾ��һ�����пո���������Ӳ���ȣ�������ѭ���������жϸ�����
			if (flag == 0)
				break;
		}
		if (1 == flag)
		{
			//�ж�˭�ɹ���ʤ
			if (board[0][j] == 'O')
				return board[0][j];  //���Ի�ʤ����O
			else if (board[0][j] == 'X')
				return board[0][j];  //���Ի�ʤ����X
		}
	}

	//�ж���б���Ƿ�ɹ�����,����ROW == COLʱ��Ч
	for (int n = 0; n < ROW; n++)
	{
		if (board[0][0] != board[n][n])
		{
			flag = 0;
		}
		else if (board[n][n] == ' ')
		{
			flag = 0;
		}
		else
			flag = 1;
		//��flagΪ0����ʾ��һ�����пո���������Ӳ���ȣ�������ѭ���������жϸ�����
		if (flag == 0)
			break;
	}
	if (1 == flag)
	{
		//�ж�˭�ɹ���ʤ
		if (board[0][0] == 'O')
			return board[0][0];  //���Ի�ʤ����O
		else if (board[0][0] == 'X')
			return board[0][0];  //���Ի�ʤ����X
	}

	//�ж���б���Ƿ�ɹ�����,����ROW == COLʱ��Ч
	for (int n = 0; n < ROW; n++)
	{
		if (board[0][ROW - 1] != board[0 + n][ROW - 1 - n])
		{
			flag = 0;
		}
		else if (board[0 + n][ROW - 1 - n] == ' ')
		{
			flag = 0;
		}
		else
			flag = 1;
		//��flagΪ0����ʾ��һ�����пո���������Ӳ���ȣ�������ѭ���������жϸ�����
		if (flag == 0)
			break;
	}
	if (1 == flag)
	{
		//�ж�˭�ɹ���ʤ
		if (board[0][ROW - 1] == 'O')
			return board[0][ROW - 1];  //���Ի�ʤ����O
		else if (board[0][ROW - 1] == 'X')
			return board[0][ROW - 1];  //���Ի�ʤ����X
	}

	//��û�гɹ�����ʱ���ж���ƽ�ֻ��Ǽ�����Ϸ
	if (0 == flag)
	{
		int spare = 1;  //�����Ƿ��пո�����Ϊ0������Ϊ1�����ж��Ƿ�ִ�з���D�Ĳ���
		//���������пո�ʱ����C��ʾ������Ϸ
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				if (board[i][j] == ' ')
				{
					j = COL;
					spare = 0;  //�������пո��ñ���spareΪ0����ִ�з���D�Ĳ���
					return 'C';
					break;
				}
			}
		}
		//���������޿ո񷵻�D��ʾƽ��
		if (spare)
			return 'D';
	}
}