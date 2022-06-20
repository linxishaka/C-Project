#include<stdio.h>
int main() {
	int x;
	int ret = 0;
	x = 128;
	//在对x做修改之前，对原始的x的值128保存，后面输出就用把x保存进t的值
	int t = x;
	while (x > 1) {
		x /= 2;
		ret++;
	}
	printf("log2 of %d is %d", t, ret);
	return 0;
}