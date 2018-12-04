#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);
	int a[500],b[500], c[1000],t;
	for (int i = 0; i < m; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &b[i]);
	}
	memcpy(c, a, m * sizeof(int));
	memcpy(c+ m, b, n * sizeof(int));
	for (int i = 0; i < m + n; i++)
	{
		for (int j = i+1; j < m + n; j++)
		{
			if (c[j] < c[i])
			{
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
		if (i > 0)
			printf(" ");
		printf("%d", c[i]);
	}
	return 0;
}