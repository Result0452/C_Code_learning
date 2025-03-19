#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//��ʼ������Ϊ'0'��'*'
void InitBoard(char mine[][MAX_ROW_AND_COL + 2], int row_and_col, char init_cha)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row_and_col; i++)
	{
		for (j = 0; j < row_and_col; j++)
		{
			mine[i][j] = init_cha;
		}
	}
}

//����������ݴ�ӡ����
void PrintBoard(char mine[][MAX_ROW_AND_COL + 2], int row_and_col)
{
	printf("\n");  //���б���������Ϸ����
	int i = 0;
	int j = 0;
	printf("+");
	for (j = 0; j <= row_and_col; j++)
	{
		printf("---");
	}
	printf("+\n");
	printf("|00 ");
	for (j = 1; j <= row_and_col; j++)
	{
		printf("%02d ", j);
	}
	printf("|\n");
	for (i = 1; i <= row_and_col; i++)
	{
		printf("|");
		printf("%02d ", i);
		for (j = 1; j <= row_and_col; j++)
		{
			printf("%c  ", mine[i][j]);
		}
		printf("|\n");
	}
	printf("+");
	for (j = 0; j <= row_and_col; j++)
	{
		printf("---");
	}
	printf("+\n");
}

//���ײ���,����mine_nums����
void SetMine(char mine[][MAX_ROW_AND_COL + 2], int row_and_col, int mine_num, int first_input_x, int first_input_y)
{
	while (mine_num)//��������mine_num���׺�mine_num��Ϊ0�Ͳ�����ѭ����
	{
		int x = (rand() % row_and_col) + 1;  //�������һ��������Ϊ�׵�x����
		int y = (rand() % row_and_col) + 1;  //�������һ��������Ϊ�׵�y����
		//�Ϸ��Լ�⣬����������ɵ���������Ӧ������Ԫ���ڲ��ںϷ��Ŀռ䷶Χ��
		if (mine[x][y] == '0' && !(x == first_input_x && y == first_input_y))
		{
			mine[x][y] = '1';//�������ڵ�λ�õ�����Ԫ�ظ�Ϊ'1'
			mine_num--;//����һ���׾ͼ�1
		}
	}
}

//��ʶ���׵����򣬱�ʶ�˵�������boardΪ'p'
void Mark_Mine(char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* flag_num_p)
{
	int x = 0;//��ʼ������x
	int y = 0;//��ʼ������y
	if (*flag_num_p)
	{
		printf("\nѡ����Ҫ��ʶ��λ��(����\"-1 -1\"�˳�������ѡ��˵�)��>");
		while (1)
		{
			scanf("%d %d", &x, &y);
			if (-1 == x || -1 == y)
			break;
			//�Ϸ��Լ���
			if (x > 0 && x <= row_and_col && y > 0 && y <= row_and_col && board[x][y] == '*')
			{
				board[x][y] = 'p';
				(*flag_num_p)--;//�ɱ�ʶ��������һ��
				break;
			}
			else
				printf("���������λ��������ѱ���ʶ������������:>");
		}
	}
	else
		printf("���ɱ�ʶ������Ϊ0���������²���\n\n");
}

//ȡ����ʶ���׵����򣬽���ʶ�����'p'��Ϊ'*'
void Cancle_Mark_Mine(char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* flag_num_p, int mine_num)
{
	if ((*flag_num_p) - mine_num)
	{
		int x = 0;//��ʼ������x
		int y = 0;//��ʼ������y
		printf("\nѡ����Ҫȡ����ʶ��λ��(����\"-1 -1\"�˳�������ѡ��˵�)��>");
		while (1)
		{
			scanf("%d %d", &x, &y);
			if (-1 == x || -1 == y)
				break;
			//�Ϸ��Լ���
			if (x > 0 && x <= row_and_col && y > 0 && y <= row_and_col && board[x][y] == 'p')
			{
				board[x][y] = '*';
				(*flag_num_p)++;//�ɱ�ʶ��������һ��
				break;
			}
			else
				printf("���������λ�������δ����ʶ������������:>");
		}
	}
	else
		printf("��ǰ�����򱻱�ʶ\n");
}

//����ѡ������
void Open_Area(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], char after_mark_mine_num[][MAX_ROW_AND_COL + 2], int row_and_col, int* game_state_p, int* safe_area_p, int* is_set_p, int mine_num)
{
	int x = 0;//��ʼ������x
	int y = 0;//��ʼ������y
	printf("\nѡ����Ҫ�������λ��(����\"-1 -1\"�˳�������ѡ��˵�):>");
	while (*game_state_p)
	{
		scanf("%d %d", &x, &y);
		if (-1 == x || -1 == y)
			break;
		if (x <= 0 || x > row_and_col || y <= 0 || y > row_and_col)
			printf("���������λ�ò����ڣ�����������:>");
		else if (board[x][y] == 'p')
		{
			printf("(%d,%d)�ѱ���ʶ������������:>", x, y);
		}
		else if (board[x][y] != '*')
		{
			printf("(%d,%d)�ѱ��򿪣�����������:>", x, y);
		}
		else if (mine[x][y] == '1')
		{
			*game_state_p = 0;//����Ϸ״̬��Ϊ0�Խ�����Ϸ�����ж�
			//��Ϸ��������������Ϸ�����ӡ��������ҿ�
			printf("\n--------------------------------------------------------------\n");
			PrintBoard(board, row_and_col);
			printf("��Ϸ���վ���\n");
			PrintBoard(mine, row_and_col);
			printf("��������\n");
			printf("\n���򿪵�����(%d,%d)���ף���Ϸ����......\n\n", x, y);
			printf("\n--------------------------------------------------------------\n");
			Sleep(60000);  //�ӳ�60000ms����ҿ��Կ�����ʾ�����˳�����
		}
		else//������Ϊ��ȫ��������
		{
			if (*is_set_p)
			{
				SetMine(mine, row_and_col, mine_num, x, y);//���ײ���,����mine_num����
				*is_set_p = 0;//��״̬����Ϊ�ѳ�ʼ��
			}
			Get_Mine_Num(mine, board, after_mark_mine_num, row_and_col, safe_area_p, x, y);//��ȡ��������Χ�׵�����
			break;
		}		
	}
}

//��ȡ��������Χ�׵�����
void Get_Mine_Num(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], char after_mark_mine_num[][MAX_ROW_AND_COL + 2], int row_and_col, int* safe_area_p,int x, int y)
{
	if (x > 0 && x <= row_and_col && y > 0 && y <= row_and_col && board[x][y] == '*')//�Ϸ��Լ���
	{
		(*safe_area_p) --;//��򿪵İ�ȫ�����1
		char count = '0';//������Χ�׵ı���
		char after_mark_count = '0';//�����ȥ��Χ�б�ʶ������ĸ�������Χ�׵�����
		for(int i = x -1; i <= x+1; i++)
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (mine[i][j] == '1')
					count++;
				if (mine[i][j] == '1' && board[i][j] != 'p')
					after_mark_count++;
			}
		board[x][y] = count;  //������Ϸ��ʾ�����״̬
		after_mark_mine_num[x][y] = after_mark_count;  //���³�ȥ��Χ�б�ʶ������ĸ�������Χ�׵�����
		//������Ӧ�򿪸ð�ȫ������Χ�˸�����
		if (after_mark_mine_num[x][y] == '0')
		{
			if (board[x][y] == '0')
			{
				board[x][y] = ' ';
			}
			for (int i = x - 1; i <= x + 1; i++)
			{
				for (int j = y - 1; j <= y + 1; j++)
				{
					if (i != x || j != y)//�ų��������Լ�����
					{
						if (i >= 1 && i <= row_and_col && j >= 1 && j <= row_and_col)//����Ϸ���
						{
							Get_Mine_Num(mine, board, after_mark_mine_num, row_and_col, safe_area_p, i, j);//��ȡ��������Χ�׵��������ݹ����ֱ������߽��������Χ�׵�������Ϊ0
						}
					}
				}
			}
		}
	}
}

//��Ϸʤ���ж�
void IsWin(char mine[][MAX_ROW_AND_COL + 2], char board[][MAX_ROW_AND_COL + 2], int row_and_col, int* safe_area_p, int* game_state_p)
{
	if (0 == *safe_area_p && -1 == *game_state_p)
	{
		*game_state_p = 1;
		//��Ϸ��������������Ϸ�����ӡ��������ҿ�
		printf("\n--------------------------------------------------------------\n");
		PrintBoard(board, row_and_col);
		printf("��Ϸ���վ���\n");
		PrintBoard(mine, row_and_col);
		printf("��������\n");
		printf("\n�㽫ȫ�����׶����˳���!��Ϸʤ��!\n\n");
		printf("\n--------------------------------------------------------------\n");
		Sleep(60000);  //�ӳ�60000ms����ҿ��Կ�����ʾ�����˳�����
	}
}