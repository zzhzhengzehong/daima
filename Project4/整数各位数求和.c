#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum(int i)
{
	int a[20],j,n,temp,sum=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (j = 0; j < n; j++) {
		while (a[i] != 0) {
			temp = a[i] % 10;
			a[i] = a[i] / 10;
			sum += temp;
			i++;
		}
	}
}
int main()
{
	int n,i,a[20];
	
}