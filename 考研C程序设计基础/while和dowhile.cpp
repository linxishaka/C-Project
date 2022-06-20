#include<stdio.h>
int main() {
	//在进入循环的时候不做检查，而是在执行完一轮循环体代码之后再检查循环条件是否满足 
	//while是首先要判断条件是否满足，如果条件满足再执行循环体内容
	int x;
	int n = 0;
	scanf_s("%d", &x);
	while (x > 0) {
		n++;
		x /= 10;
	}
	printf("%d\n", n);
	return 0;
}