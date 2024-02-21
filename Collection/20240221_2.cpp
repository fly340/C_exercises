//把560分钟换算成用小时和分钟表示并输出。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 560;
	int m = 560 % 60;
	int h = (a - m) / 60;
	printf("560 minutes equals %d hours and %d minutes.", h, m);

	return 0;
}