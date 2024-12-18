//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct a {
//	int year;
//	int month;
//	int day;
//}days;
//int main(){
//	int b[20],i,sum=0;
//	scanf("%d %d %d", &days.year, &days.month, &days.day);
//	for (i = 1; i < days.month; i++) {
//		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
//			b[i] = 31;
//		}
//		else if (i == 4 || i == 6 || i == 9 || i == 11) {
//			b[i] = 30;
//		}
//		else if (days.year % 400 == 0 || (days.year % 4 == 0 && days.year % 100 != 0)) {
//			b[i] = 29;
//		}
//		else b[i] = 28;
//		sum += b[i];
//	}
//	sum = sum + days.day;
//	printf("%d", sum);
//	return 0;
//}