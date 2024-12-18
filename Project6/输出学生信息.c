//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//struct information {
//	int num;
//	char* name;
//	char sex;
//	int age;
//	double chinese;
//	double math;
//	double english;
//}student[4] = { {1,"zhangsan",'M',20,86.3,88.5,78.5},
//	{2,"lisi",'F',18,78.5,76.3,68.5},
//	{3,"wangwu",'M',19,90.2,85.6,84.6},
//	{4,"zhaoliu",'F',21,76.5,90.5,85.5}};
//int cmp(const void* a, const void* b) {
//	struct information* f1 = (struct information*)a;
//	struct information* f2 = (struct information*)b;
//	return f2->chinese - f1->chinese;
//}
//int main() {
//	int i;
//	qsort(student, 4, sizeof(struct information), cmp);
//	for (i = 0; i < 4; i++) {
//		printf("%2d%10s%2c%4d%6.2lf%6.2lf%6.2lf", student[i].num, student[i].name, student[i].sex, student[i].age, student[i].chinese, student[i].math, student[i].english);
//		printf("\n");
//	}
//	return 0;
//}