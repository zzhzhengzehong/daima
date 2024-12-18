//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void cmp(char a[][100], int n) {
//	int i, j;
//	char temp[100];
//	for (i = 0; i < n ; i++) {
//		for (j = 0; j < n - i ; j++) {
//			if (strcmp(a[j], a[j + 1]) > 0) {
//				strcpy(temp, a[j]);
//				strcpy(a[j], a[j + 1]);
//				strcpy(a[j + 1], temp);
//			}
//		}
//	}
//}
//int main()
//{
//	int n, i;
//	scanf("%d", &n);
//	char a[1000][100];
//	for (i = 0; i <= n; i++) {
//		fgets(a[i], 100, stdin);
//	}		
//	cmp(a, n);
//	for (i = 1; i <= n; i++) {
//		printf("%s", a[i]);
//	}
//	return 0;
//}

//µÚ¶þÖÖ
//int cmp(const void *a, const void *b ) {
//	return strcmp(*(const char**)a, *(const char**)b);
//}
//int main() {
//	int n, i;
//	scanf("%d", &n);
//	char *a[100];
//	for (i = 0; i <= n; i++) {
//		a[i] = (char*)malloc(100 * sizeof(char));
//		fgets(a[i], 100, stdin);
//	}
//	qsort(a, n, sizeof(char*), cmp);
//	for (i = 1; i <= n; i++) {
//		printf("%s", a[i]);
//		free(a[i]);
//	}
//	return 0;
//}
