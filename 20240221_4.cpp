//计算三个小数的平均值。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double d = (a + b + c) / 3;
	d = (d * 100 + 5) / 100;
	printf("平均值为%.1f", d);

	
	return 0;
}