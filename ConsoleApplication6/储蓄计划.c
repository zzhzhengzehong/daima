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
////    int sum = 0;//��ʼ�������ڼ�¼ÿ����ʣ���ж���Ǯ
////    int sum0 = 0;//����м�û�г���ȱǮ���������ô�������sum0���洢ÿ���������������ж��ٳ�Ʊ
////    for (int i = 1; i <= 12; i++)//һ��ʮ�����£�������������
////    {
////        sum += 300;//�����Ǯ
////        scanf("%d", &n);
////        sum = sum - n;
////        if (sum < 0)//������Ѵ��ڿ�֧��Ϊ������ֱ�����ok
////        {
////            printf("-%d\n", i);//�ر�ע�⸺��
////            return 0;
////        }
////        else sum0 += sum / 100 * 100;//������Ǿ������������Ǯ
////        sum = sum - sum / 100 * 100;//ÿ����������ʣ�����Ǯ
////    }printf("%d\n", sum0 * 12 / 10 + sum);//�������δ���������ô�Ϳ��Դ�ӡ�������Ǯ��
////    return 0;
////}