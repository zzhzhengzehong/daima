//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	double F = 0.0, p, w, s, d = 0.0;
//	scanf("%lf,%lf,%lf", &p, &w, &s);
//	if (0 < s && s < 250) {
//		d = 0.0;
//	}
//	else if (250 <= s && s < 500) {
//		d = 0.02;
//	}
//	else if (500 <= s && s < 1000) {
//		d = 0.05;
//	}
//	else if (1000 <= s && s < 2000) {
//		d = 0.08;
//	}
//	else if (2000 <= s && s < 3000) {
//		d = 0.1;
//	}
//	else if (s > 3000) {
//		d = 0.15;
//	}
//	F = p * w * s * (1 - d);
//	printf("freight=%.4lf", F);
//	return 0;
//}