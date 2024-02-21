//求两数之商和余数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个正整数：");
	scanf("%d %d", &a, &b);
	if (a < 0 || b <= 0) {
		printf("输入的不是正整数");
	}
	else {
		int c = a % b;//计算余数
		int d = (a - c) / b;//计算商
		printf("商为%d,余数为%d", d, c);
	}

	
	return 0;
}