//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c,d=0.0, x[2] = { 0.0 };
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	x[0] = (-b - sqrt(b * b - 4 * a * c)) / 2*a;
//	x[1] = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
//	if (b * b - 4 * a * c > 0) {
//		printf("The equation has two different roots : %lf%.2lf", x[0],x[1]);
//	}
//	else if (b * b - 4 * a * c == 0) {
//		printf("The equation has two equal roots: %.4lf", x[0]);
//	}
//	else if (b * b - 4 * a * c < 0) {
//		d = sqrt(4 * a * c - b * b);
//		printf("The equation has complex roots:\n%.2lf + %.2lf i\n%.2lf - %.2lf i",-b/2*a,d/2*a, -b / 2 * a, d / 2 * a);
//	}
//		
//	return 0;
//}