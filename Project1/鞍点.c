//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int n, i, j, k, a[6][6], x[6], y[6], flag = 0;
//    printf("Input n:");
//    scanf("%d", &n);
//    printf("Input array:\n");
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++) {
//        x[i] = a[i][0];
//        for (j = 1; j < n; j++) {
//            if (a[i][j] > x[i]) {
//                x[i] = a[i][j];
//            }
//        }
//    }
//    for (j = 0; j < n; j++) {
//        y[j] = a[0][j];
//        for (i = 1; i < n; i++) {
//            if (a[i][j] < y[j]) {
//                y[j] = a[i][j];
//            }
//        }
//    }
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            if (a[i][j] == x[i] && a[i][j] == y[j]) {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag) {
//            break;
//        }
//    }
//    if (flag) {
//        printf("a[%d][%d]=%d\n", i , j , a[i][j]);
//    }
//    else {
//        printf("NO\n");
//    }
//    return 0;
//}