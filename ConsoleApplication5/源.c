#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, e;
	scanf("%d %d", &a, &b);
	c = a * 10 + b;
	e = c / 19;
	printf("%d", e);
	return 0;
}