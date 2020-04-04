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
//rand函数返回0-32767之间的随机整数

void game()
{
	int guess = 0;   
	//生成随机数
	int ret = rand() % 100 + 1;      
	//开始猜
	while (1)
	{
		printf("请输入您猜的数字\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜的数大了\n");
		}
		else if (guess < ret)
		{
			printf("猜的数小了\n");
		}
		else if (guess = ret)
		{
			printf("恭喜您，猜正确了");
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
		printf("请输入1/0来选择开始或退出\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:printf("退出游戏\n");
			break;
		case 1:
			printf("您已进入游戏\n");
			game();
			break;
		default:("选择错误，请重新输入");
			break;
		}
	} while (input);
	return 0;
}