#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("******************\n");
	printf("play:1      exit:0\n");
	printf("******************\n");
}

//RAND_MAX - 32676
//rand��������0-32767֮����������

void game()
{
	int guess = 0;   
	//���������
	int ret = rand() % 100 + 1;      
	//��ʼ��
	while (1)
	{
		printf("���������µ�����\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�µ�������\n");
		}
		else if (guess < ret)
		{
			printf("�µ���С��\n");
		}
		else if (guess = ret)
		{
			printf("��ϲ��������ȷ��");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������1/0��ѡ��ʼ���˳�\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("���ѽ�����Ϸ\n");
			game();
			break;
		default:("ѡ���������������");
			break;
		}
	} while (input);
	return 0;
}