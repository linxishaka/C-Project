#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100之间的数");
	do {
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("你猜的数字大了");
		}
		else if (a < number) {
			printf("你猜的数字小了");
		}
	} while (a != number);
	printf("太好了，你用了%d词就猜到了答案。\n", count);
}   