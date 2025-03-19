#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//��ʼ��Ϸ�˵�����
void start_game_menu()
{
	printf("+------------+\n");
	printf("|   1.PLAY   |\n");
	printf("|   0.EXIT   |\n");
	printf("+------------+\n");
	printf("�Ƿ�ʼɨ����Ϸ��>");
}

//ѡ����Ϸ�ѶȽ���
void game_level_menu()
{
	printf("\n");  //���б���������Ϸ����
	printf("+------------------+\n");
	printf("|      1.Easy      |\n");
	printf("|      2.Medium    |\n");
	printf("|      3.Hard      |\n");
	printf("+------------------+\n");
	printf("��ѡ����Ϸ�Ѷȣ�>");
}

//ѡ�����ѡ��Ľ���
void action_options(int flag_num)
{
	printf("+----------------------------------------+\n");
	printf("|      1.������                        |\n");
	printf("|      2.��ʶ����(�����Ա�ʶ%02d������)    |\n", flag_num);
	printf("|      3.ȡ����ʶ                        |\n");
	printf("+----------------------------------------+\n");
	printf("��ѡ����Ҫ������ѡ�>");
}

int main()
{
	srand((unsigned int)time(NULL));  //����ʱ������������������ֵ
	int start_game_menu_input = 0;  //��ʼ����ʼ��Ϸ�˵���ѡ�񰴼���������Ϊ1ʱ��ʼ��Ϸ��0ʱ�˳���Ϸ
	int row_and_col = 0;  //��ʼ��ѡ���ѶȺ��ʾ��Ϸ�ռ䳤��ı���
	int mine_num = 0;  //����Ҫ����׵�����
	int game_state = -1;  //������Ϸ��״̬��-1Ϊ������Ϸ��0Ϊ��Ϸ������1Ϊ��Ϸʤ��
	int* game_state_p = &game_state;  //����һ��ָ�����ָ��game_state�Ժ��������ں����иı���
	int safe_area = 0;//����û���׵����������
	int* safe_area_p = &safe_area;//����һ��ָ�����ָ��safe_area�Ժ��������ں����иı���
	char mine[MAX_ROW_AND_COL + 2][MAX_ROW_AND_COL + 2] = { 0 };  //����һ����ά���飬���쳤�Ϳ�ΪMAX_ROW_AND_COL����Ϸ�ռ䣬ʹ�������Ѷ�ֵ����Ӧ��ͬ�Ѷ�����������С��mineΪ���׵����飬��������Ԫ��Ϊ1���λ�����ף�0���λ�����ס�MAX_ROW_AND_COL + 2 ��Ϊ�˸��ռ䴴��һ���߽����ɨ�ױ����Χ8���ռ�������ʱ�ĺϷ����Լ���
	char board[MAX_ROW_AND_COL + 2][MAX_ROW_AND_COL + 2] = { 0 };  //���쳤�Ϳ�ΪMAX_ROW_AND_COL����Ϸ�ռ䣬ʹ�������Ѷ�ֵ����Ӧ��ͬ�Ѷ�����������С��boardΪ��ʾ����Ļ�����飬����"*"��ʾΪҪɨ��λ��
	char after_mark_mine_num[MAX_ROW_AND_COL + 2][MAX_ROW_AND_COL + 2] = { 0 };  //��¼��ʶ�������Χ���׵�����

	start_game_menu();//��ʼ��Ϸ�˵�
	do
	{
		scanf("%d", &start_game_menu_input);  //��ȡ��ҵĿ�ʼ��Ϸ������Ϊ1ʱ��ʼ��Ϸ��0ʱ�˳���Ϸ

		//��ʼ��Ϸ
		if (1 == start_game_menu_input)
		{

			//ѡ����Ϸ�Ѷ�
			game_level_menu();  //�Ѷ�ѡ��˵�
			do
			{
				int game_level_menu_input = 0;  //��ʼ����Ϸ�Ѷȵı���
				scanf("%d", &game_level_menu_input);  //��ȡ���ѡ�����Ϸ�Ѷ�
				switch (game_level_menu_input)
				{
					//�Ѷ�Ϊ1ʱ,�����Ϳ� �� �׵���������ΪLEVEL_1_ROW_AND_COL
				case 1:
					row_and_col = LEVEL_1_ROW_AND_COL;
					mine_num = LEVEL_1_MINE_NUM;
					break;
					//�Ѷ�Ϊ2ʱ,�����Ϳ� �� �׵���������ΪLEVEL_2_ROW_AND_COL
				case 2:
					row_and_col = LEVEL_2_ROW_AND_COL;
					mine_num = LEVEL_2_MINE_NUM;
					break;
					//�Ѷ�Ϊ3ʱ,�����Ϳ� �� �׵���������ΪLEVEL_3_ROW_AND_COL
				case 3:
					row_and_col = LEVEL_3_ROW_AND_COL;
					mine_num = LEVEL_3_MINE_NUM;
					break;
					//�����Ѷ�ֵ���ڿ�ѡ��Χ��
				default:
					printf("�޴��Ѷȣ�����������:>");
					break;
				}
			} while (!row_and_col);

			//��Ϸ��������
			//��ʼ��
			InitBoard(mine, row_and_col + 2, '0');  //��ʼ���������飬����ȫ��Ϊ0��
			InitBoard(board, row_and_col + 2, UNOPEN_AREA);  //��ʼ����ʾ����Ļ�����飬����ȫ��Ϊ*��
			*safe_area_p = row_and_col * row_and_col - mine_num;//��safe_area��ֵ��ʼ��
			int flag_num = mine_num;  //��ʼ���ɱ�ʶ������Ϊ�׵�����
			int* flag_num_p = &flag_num; //����һ��ָ�����ָ��flag_num�Ժ��������ں����иı���
			int is_set = 1;//����һ��������¼�Ƿ��Ѿ���ʼ����Ϸ������,1Ϊδ��ʼ����0Ϊ�ѳ�ʼ��
			int* is_set_p = &is_set;//����һ��ָ�����ָ��is_set�Ժ��������ں����иı���
			//����ѡ��ѡ��
			while (-1 == game_state)
			{
				int action_options_input = 0; //����һ����¼��Ϸѡ��ı���
				PrintBoard(board, row_and_col);//��ӡ�����������Ϸ����
				action_options(flag_num);  //ѡ�����ѡ��Ľ���
				scanf("%d", &action_options_input);  //��ȡ���ѡ���ѡ��
				switch (action_options_input)
				{
					//���������
				case 1:
					Open_Area(mine, board, after_mark_mine_num, row_and_col, &game_state, &safe_area, &is_set, mine_num);
					break;
					//��ʶ�������
				case 2:
					Mark_Mine(board, row_and_col, &flag_num);
					break;
					//ȡ����ʶ����
				case 3:
					Cancle_Mark_Mine(board, row_and_col, &flag_num, mine_num);
					break;
					////����ѡ��ڿ�ѡ��Χ��
				default:
					printf("�޴�ѡ�����������:>");
					break;
				}
				//��Ϸʤ���ж�
				IsWin(mine, board, row_and_col, &safe_area , &game_state);
			}
			break;
		}
		//�˳���Ϸ
		else if (!start_game_menu_input)
		{
			printf("�����˳���Ϸ......");
			Sleep(2000);  //�ӳ�2000ms����ҿ��Կ�����ʾ�����˳�����
		}
		//����Ƿ�����
		else
		{
			printf("������������������:>");
		}
	} while (start_game_menu_input);
	return 0;
}