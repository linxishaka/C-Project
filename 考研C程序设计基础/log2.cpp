#include<stdio.h>
int main() {
	int x;
	int ret = 0;
	x = 128;
	//�ڶ�x���޸�֮ǰ����ԭʼ��x��ֵ128���棬����������ð�x�����t��ֵ
	int t = x;
	while (x > 1) {
		x /= 2;
		ret++;
	}
	printf("log2 of %d is %d", t, ret);
	return 0;
}