//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct information {
//	int num;
//	int age;
//	char* name;
//}student[50];
//int cmp1 (const void*a,const void*b){
//	struct information* f1 = (struct information*)a;
//	struct information* f2 = (struct information*)b;
//	return strcmp(f1->name,f2->name);
//}
//int cmp2(const void* a, const void* b) {
//	struct information* f1 = (struct information*)a;
//	struct information* f2 = (struct information*)b;
//	return f1->age - f2->age;
//}
//int main(){
//	int n,i;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		student[i].name = (char*)malloc(n * sizeof(struct information));
//		scanf("%d %s %d", &student[i].num, student[i].name, &student[i].age);
//	}
//	qsort(student, n, sizeof(struct information), cmp1);
//	for (i = 0; i < n; i++) {
//		printf("%3d%6s%3d", student[i].num, student[i].name, student[i].age);
//		printf("\n");
//	}
//	printf("\n");
//	qsort(student, n, sizeof(struct information), cmp2);
//	for (i = 0; i < n; i++) {
//		printf("%3d%6s%3d", student[i].num, student[i].name, student[i].age);
//		printf("\n");
//	}
//	for (i = 0; i < n; i++) {
//		free(student[i].name);
//	}
//	return 0;
//}