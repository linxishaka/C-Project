#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1��100֮�����");
	do {
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("��µ����ִ���");
		}
		else if (a < number) {
			printf("��µ�����С��");
		}
	} while (a != number);
	printf("̫���ˣ�������%d�ʾͲµ��˴𰸡�\n", count);
}   