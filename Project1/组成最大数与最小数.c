//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	long int a[10086];
//	int i,j,x,y,n=6,m;
//	scanf("%d", &m);
//	for (i = 0; i < n; i++) {
//		a[i] = m % 10;
//		m = m / 10;
//	}
//	for (j= 0; j < n; j++) {
//		for (i = 0; i < n - j; i++) {
//			if (a[i] < a[i + 1]) {
//				y = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = y;
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//			printf("%ld", a[i]);
//	}
//	printf(" ");
//	
//	for (j = 0; j < n; j++) {
//		for (i = 0; i < n - j-1; i++) {
//			if (a[i] > a[i + 1]) {
//				x = a[i];
//				a[i] = a[i + 1]	;
//				a[i + 1] = x;
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		if (a[i] == 0)continue;
//		printf("%ld", a[i]);
//	}
//	return 0;
//}