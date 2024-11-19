#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void sort(int a[], int n) 
{
	int i, j, min, x;
	for (i = 0; i < n; i++) {
		min = i;
		for (j = i + 1; j < n; j++){
			if (a[j] < a[min]) {
				min = j;
			}
		}
		x = a[min];
		a[min] = a[i];
		a[i] = x;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
int main()
{
	int n, i,a[100];
	printf("Input n:");
	scanf("%d", &n);
	printf("Input array of %d integers:", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("After sorted the array is:");
	sort(a, n);
	return 0;
}