#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*********************\n");
	printf("****** 1. play ******\n");
	printf("****** 0. exit ******\n");
	printf("*********************\n");
}

void game()
{
	int r = rand()%100+1;
	int guess = 0;

	while (1) {
		printf("请输入所猜数字>");
		scanf("%d", &guess);

		if (guess < r) {
			printf("猜小了\n");
		}
		else if (guess > r) {
			printf("猜大了\n");
		}
		else {
			printf("恭喜，猜对了，答案为%d\n",r);
			break;
		}
	}
	
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));

	do
	{
		menu();

		printf("请选择>");
		scanf("%d", &input);

		switch (input) {

		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}

	} while (input);

	return 0;
}
