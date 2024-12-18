#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main() {
//	FILE* p1 = fopen("in.txt", "r");
//	if (p1 == NULL) {
//		exit(0);
//	}
//	int count1 = 0, count2 = 0;
//	int c,flag=0;
//	while ((c=fgetc(p1)) != EOF) {
//		count2++;
//		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//			if (!flag) {
//				count1++;
//				flag = 1;
//			}
//		}
//		else flag = 0;
//	}
//	printf("%d %d", count1, count2);
//	fclose(p1);
//	return 0;
//}