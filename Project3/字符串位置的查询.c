//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int strrindex( char s[], char t[])
//{
//	int lenS = strlen(s);
//	int lenT = strlen(t);
//	int a = -1;
//	for (int i = lenS - lenT; i >= 0; i--) {
//		int flag = 1;
//		for (int j = 0; j < lenT; j++) {
//			if (s[i + j] != t[j]) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag) {
//			a = i;
//			break;
//		}
//	}
//	return a;
//}
//int main()
//{
//	char s[1000], t[100];
//	int c=0;
//	gets(s);
//	printf("\n");
//	gets(t);
//	c = strrindex(s, t);
//	printf("%d", c);
//	return 0;
//}