#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int area(int x1, int y1, int x2, int y2, int x3, int y3,int x4,int y4)
{
	int xleft = (x1 > x3) ? x1 : x3;
	int xright = (x2 < x4) ? x2 : x4;
	int ybottom = (y1 > y3) ? y1 : y3;
	int ytop = (y2 < y4) ? y2 : y4;
	if (xright > xleft && ytop > ybottom) {
		return (xright - xleft) * (ytop - ybottom);
	}
	else return 0;
}
int main()
{
	int n, a, b,x1,x2,y1,y2, i, x=0,y=0;
	scanf("%d %d %d", &n, &a, &b);
	
	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		x=area(x1,y1,x2,y2,0,0, a, b);
		y += x;
	}
	printf("%d\n", y);
	return 0;
}