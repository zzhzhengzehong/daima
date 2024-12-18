//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int cmp(const void* a, const void* b) {
//	return strcmp((char*)a, (char*)b);
//}
//int main() {
//	FILE* p1 = fopen("sort.in", "r");
//	FILE* p2 = fopen("sort.out", "w");
//	char a[100];
//	char b[100][100];
//	int count = 0;
//	int i = 0;
//	if (p1 == NULL) {
//		exit(0);
//	}
//	if (p2 == NULL) {
//		exit(0);
//	}
//	while (fscanf(p1, "%s", a) == 1) {
//		int j;
//		for (j = 0; j < count; j++) {
//			if (strcmp(b[j], a) == 0)break;
//		}
//		if (j == count) {
//			strcpy(b[count], a);
//			count++;
//		}
//	}
//	qsort(b, count, 100, cmp);
//	for (i= 0; i < count; i++) {
//		fprintf(p2, "%s ", b[i]);
//	}
//	fclose(p1);
//	fclose(p2);
//}