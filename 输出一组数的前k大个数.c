#include<stdio.h>
int a[1000];
int main()
{
	int n, k, t;
	scanf_s("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] > a[i])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	for (int i = 0; i < k; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%d", a[i]);
	}
	return 0;
}