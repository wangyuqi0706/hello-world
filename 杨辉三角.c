#include<stdio.h>
int main()
{
	int n, a[30] = { 1 }, b[30] = { 0 }, i, k,m;
	scanf_s("%d %d",&m,&n);
	while (m--)
	{
		for (i = 0; i < n; i++)
		{
			a[0] = a[i] = 1;
			if (i >= 2)
			{
				for (k = 1; k < i; k++)
				{
					a[k] = b[k - 1] + b[k];
				}
			}
			for (k = 0; k <= i; k++)
			{
				b[k] = a[k];
				printf("%d", a[k]);
				if (k != i)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
