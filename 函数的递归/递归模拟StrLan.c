#include<stdio.h>

int is_StrLen(char *p) {
	//因为字符中最后一个值是\0，所以首先判断传进来的指针指向的地址的值是否是\0
	if (*p != '\0') {
		//因为是计算字符中的个数，所以返回值先加上1
		//最先传入的字符是abcd\0，因为不等于\0所以调用is_StrLen这个函数
		//指针最先是指向a的，而p+1可以让指针指向下一个字符
		//只有StrLen这个函数被调用取出了值之后才能让1加上isStrLen这个方法里的数字
		//在指针指向最后一个字符时，因为最后一个字符一定是\0所以通过返回值返回到上一个函数
		//因为返回值是0，而且因为这个方法是递归调用的所以返回到上一个is_StrLen函数
		//上一个函数的返回值是1，以此类推可以返回到main里的函数
		return 1 + is_StrLen(p + 1);
	}
	else {
		return 0;
	}
}
int main() {
	//不使用临时变量去实现StrLen函数方法计算字符中值的个数的模拟实现
	char arr[] = "abcd";
	//最后递归的函数的值回返回到arr里
	int sum = is_StrLen(arr);
	printf("%d\n", sum);
	return 0;
}