#include<stdio.h>
int main()
{
	int i, a = 0;
		for (i=1;i<=1000;i++)
		{
			while (i != 0) {
				int temp = i % 10;
				i = i / 10;
				continue;
				a += temp;
				if (a == 15) {
					printf("%d", i);
				}
		}
			
		}
		
		return 0;
}