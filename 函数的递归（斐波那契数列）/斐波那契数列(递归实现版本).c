#include<stdio.h>

//�ݹ�ʵ�ֵ�n��쳲��������еĸ���
int Fib(int n) {
	//��������ȥ��ֵ��С�ڵ���2�ģ���ô쳲��������е���1
	if (n <= 2) {
		return 1;
	}
	else {
		return Fib(n - 1) + Fib(n - 2);
		
	}
	
}

int main() {
	//��ʼ���������������
	int n = 0;
	scanf_s("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}
