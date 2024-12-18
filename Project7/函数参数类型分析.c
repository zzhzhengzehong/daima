//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	char a[100] = { 0 };
//	int i;
//	FILE* p1=fopen("in.h", "r");
//	FILE* p2=fopen("out.txt", "w");
//	if (p1 == NULL) {
//		exit(0);
//	}
//	if (p2 == NULL) {
//		exit(0);
//	}
//	while (fgets(a, 100, p1) != NULL) {
//		i = 0;
//		while (a[i] != ')') {
//			if (strncmp(a + i, "int", 3) == 0) {
//				fprintf(p2, "int ");
//				i += 3;
//			}
//			else if (strncmp(a + i, "char", 4) == 0) {
//				fprintf(p2, "char ");
//				i += 4;
//			}
//			else if (strncmp(a + i, "double", 6) == 0) {
//				fprintf(p2, "double ");
//				i += 6;
//			}
//			else if (strncmp(a + i, "float", 5) == 0) {
//				fprintf(p2, "float ");
//				i += 5;
//			}
//			else if (strncmp(a + i, "long", 4) == 0) {
//				fprintf(p2, "long ");
//				i += 4;
//			}
//			else if (strncmp(a + i, "void", 4) == 0) {
//				fprintf(p2, "void ");
//				i += 4;
//			}
//			else {
//				i++;
//			}
//		}
//		fprintf(p2, "\n");
//	}
//	fclose(p1);
//	fclose(p2);
//}
