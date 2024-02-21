//计算长方形的面积和体积。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	double a, b, c, s, v;
	printf("input a, b, c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	s = a * b;                   /*计算长方形面积*/
	v = a * b * c;               /*计算长方体体积*/
	printf("a=%.6f,b=%.6f,c=%.6f\n", a, b, c);
	printf("s=%.6f,v=%.6f\n", s, v);

	return 0;
}