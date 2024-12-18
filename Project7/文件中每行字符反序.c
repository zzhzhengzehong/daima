//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void swap(char* a, char* b) {
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void daoxu(char* line){
//	int len = strlen(line);
//	int i, j;
//	for (i = 0, j = len - 1; i < j; i++, j--) {
//		swap(&line[i], &line[j]);
//	}
//}
//int main() {
//	char a[100] = { 0 };
//	FILE* p1 = fopen("text1.dat", "r");
//	FILE* p2 = fopen("text2.dat", "w");
//	if (p1 == NULL) {
//		exit(0);
//	}
//	if (p2 == NULL) {
//		exit(0);
//	}
//	while (fgets(a, 100, p1) != NULL) {
//		int len=strlen(a);
//		if (len > 0 && a[len - 1] == "\n") {
//			a[len - 1] = "\0";
//		}
//		daoxu(a);
//		fprintf(p2, "%s\n", a);
//	}
//		fclose(p1);
//		fclose(p2);
//	}
