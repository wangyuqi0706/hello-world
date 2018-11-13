#include<stdio.h>
int a[1000];
int main()
{
	int m ;
	scanf_s("%d", &m);
	while (m--)
	{
		int i = 0;
		while (1)
		{
			scanf_s("%d", &a[i]);
			if (a[i] == 0)
				break;
			i++;
		}
		int equal = 0,j;
		for (j = 1; j <= i+1; j++)
		{
			equal = 0;
			for (int p = 0; p < i; p++)//遍历数组查找j
			{
				if (a[p] == j)
				{
					equal = 1;
					break;
				}
			}
			if (equal == 0)
			{
				printf("%d\n", j);
				break;
			}
		}
		
	}
	return 0;
}