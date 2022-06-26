#include<stdio.h>

//递归实现第n个斐波那契数列的个数
int Fib(int n) {
	//如果传入进去的值是小于等于2的，那么斐波那契数列等于1
	if (n <= 2) {
		return 1;
	}
	else {
		return Fib(n - 1) + Fib(n - 2);
		
	}
	
}

int main() {
	//初始化设置输入的数字
	int n = 0;
	scanf_s("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}
