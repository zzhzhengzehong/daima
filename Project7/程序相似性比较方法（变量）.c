#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	FILE* p1 = fopen("input.c", "r");
	FILE* p2 = fopen("output.c", "w");
	char line[100]; char num[100][100]; char swap[100][100];
	int i = 0, n = 0;
	if (p1 == NULL) {
		exit(0);
	}
	if (p2 == NULL) {
		exit(0);
	}
	while (fscanf(p1, "%s", line) != EOF) {
		strcpy(num[i], line); 
		i++;
	}
	for (int j = 0; j < i; j++) {
		if (strcmp(num[j - 1], "int") == 0 && j > 0) {
			while (strcmp(num[j], ";") != 0) {
				if (strcmp(num[j], ",") != 0) {
					strcpy(swap[n], num[j]);
					n++;
				}
				j++;
			}
		}
	}
	rewind(p1);
	while (fscanf(p1, "%s", line) != EOF) {
		if (n == 0) { fputs(line, p2); }
		else
		{
			int flag = 1;
			for (int j = 0; j < n; j++) {
				if (strcmp(line, swap[j]) == 0) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				fputs(line, p2);
			}
		}
	}
	fclose(p1);
	fclose(p2);
	return 0;
}
