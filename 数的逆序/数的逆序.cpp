#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	//�������������
	int digit;
	//Ԥ�����ý��Ϊ0
	int ret = 0;
	while (x > 0) {
		//��x����10��ʣ�µ����־��ǵ�һλ������
		digit = x % 10;
		//�����һλ������
		printf("%d", digit);
		//��ret����ʮ����λ���ټ���digit
		ret = ret * 10 + digit;
		printf("ret = %d\n", ret);
		//����������/10�Ĳ�����ȥ���˸�λ��
		x /= 10;
	}
	return 0;
}  