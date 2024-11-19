//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	double a[3], b[3],c=0,d=0;
//	for (int i = 0; i < 3; i++) {
//		scanf("%lf", &a[i]);
//		c += a[i];
//	}
//	for (int i = 0; i < 3; i++) {
//		if(a[i]<=3.0) {
//			b[i] = 2.00;
//		}
//		else {
//			int e = (int)(a[i] - 2);
//          int f=a[i]-2;
//          if(e==f){
//          e=a[i]-3;
//          }
//			b[i] = e * 0.5 + 2;
//			if (b[i] > 10.00) {
//				b[i] = 10.00;
//			}
//		}
//		d += b[i];
//	}
//	printf("%5s%15s%15s\n%5d%15.1lf%15.2lf\n%5d%15.1lf%15.2lf\n%5d%15.1lf%15.2lf\n%5s%15.1lf%15.2lf\n","Car","Hours","Charge",1 ,a[0], b[0],2, a[1], b[1],3, a[2], b[2],"TOTAL", c, d);
//	return 0;
//}