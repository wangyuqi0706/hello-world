//素数是只有1和本身是因子的数
//2018/11/14 更新
#include<stdio.h>
int main() 
{
	int n, isPrime, i, a=0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		isPrime = 1;
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0&&i>1)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1)
		{
			printf("%d\t", i);
			a++;
			if (a % 5 == 0)
				printf("\n");
		}
			
	}
	return 0;
    //to do sth
}
