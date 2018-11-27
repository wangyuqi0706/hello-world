#include<stdio.h>
int main()
{
	int n, single;
	scanf_s("%d", &n);
	int a[500];
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		single = 1;
		for (int j = 0; j < n; j++)
		{
			if (a[j] == a[i] && i != j)
			{
				single = 0;
				break;
			}
		}
		if (single == 1)
		{
			printf("%d", a[i]);
			break;
		}
	}
	return 0;
}