//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int save = 0, left = 0, plan;
//	for (int month = 1; month <= 12; month++)
//	{
//		scanf("%d", &plan);
//		left += 300;
//		left = left - plan;
//		if (left < 0) 
//		{
//			printf("-%d\n", month);
//			return 0;
//		}
//		else
//		{
//			save = save + (left / 100 * 100);
//		left = left - (left / 100 * 100);
//	}
//	}
//		printf("%d\n", save*12/10+ left);
//	return 0;
//		}
////#define _CRT_SECURE_NO_WARNINGS
////#include<stdio.h>
////int n;
////int main() {
////    int sum = 0;//初始化，用于记录每个月剩余有多少钱
////    int sum0 = 0;//如果中间没有出现缺钱的情况，那么就用这个sum0来存储每个月在妈妈手里有多少钞票
////    for (int i = 1; i <= 12; i++)//一年十二个月，不多做解释了
////    {
////        sum += 300;//妈妈给钱
////        scanf("%d", &n);
////        sum = sum - n;
////        if (sum < 0)//如果消费大于开支则为负数，直接输出ok
////        {
////            printf("-%d\n", i);//特别注意负号
////            return 0;
////        }
////        else sum0 += sum / 100 * 100;//如果不是就往妈妈手里存钱
////        sum = sum - sum / 100 * 100;//每个孩子手里剩余多少钱
////    }printf("%d\n", sum0 * 12 / 10 + sum);//如果上述未有输出，那么就可以打印输出多少钱了
////    return 0;
////}