//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//struct lian{
//	int num;
//	double score;
//	struct lian *next;
//};
//struct lian* creat(void) {
//	struct lian* head;
//	struct lian* p1, * p2;
//	int n = 0;
//	p1 = p2 = (struct lian*)malloc(sizeof(struct lian));
//	scanf("%d,%lf", &p1->num, &p1->score);
//	head = NULL;
//	while (p1->num != 0) {
//		n = n + 1;
//		if (n == 1)head = p1;
//		else p2->next = p1;
//		p2 = p1;
//		p1 = (struct lian*)malloc(sizeof(struct lian));
//		scanf("%d,%lf", &p1->num, &p1->score);
//	}
//	p2->next = NULL;
//	return head;
//}
//int main() {
//	struct lian* pt;
//	pt = creat();
//	while (pt!= NULL) {
//		printf("num=%d score=%.2lf\n", pt->num, pt->score);
//		pt = pt->next;
//	}
//	return 0;
//}

