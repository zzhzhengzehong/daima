//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int same_set(int a[], int b[], int len)
//{
//	int i,j,x,y;
//	for (j = 0; j < len-1; j++) {
//		for (i = 0; i < len-1-j; i++) {
//			if (a[i] > a[i + 1]) {
//				x = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = x;
//			}
//			if (b[i] > b[i + 1]) {
//				y = b[i];
//				b[i] = b[i + 1];
//				b[i + 1] = y;
//			}
//		}
//	}
//	for (i = 0; i < len; i++) {
//		if (a[i] != b[i]) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	int a[20], b[20], len,i;
//	scanf("%d", &len);
//	for (i = 0; i < len; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < len; i++) {
//		scanf("%d", &b[i]);
//	}
//	same_set(a, b, len);
//	printf("%d", same_set(a, b, len));
//	return 0;
//}
//
