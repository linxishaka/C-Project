#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	//设置输入的数字
	int digit;
	//预先设置结果为0
	int ret = 0;
	while (x > 0) {
		//让x除以10，剩下的数字就是第一位的数字
		digit = x % 10;
		//输出第一位的数字
		printf("%d", digit);
		//用ret乘以十增加位数再加上digit
		ret = ret * 10 + digit;
		printf("ret = %d\n", ret);
		//对整数再做/10的操作就去掉了个位数
		x /= 10;
	}
	return 0;
}  