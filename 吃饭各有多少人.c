#include<stdio.h>
int main()
{
	int n, x, y;
	scanf_s("%d", &n);
	while (n--)
	{
		scanf_s("%d %d", &x, &y);
		for (int i = 0; i <= x; i++)
		{
			for (int j = 0; j <= x - i; j++)
			{
				for (int k = 0; k <= x - i - j; k++)
				{
					if (i + k + j == x && 3 * i + 2 * j + k == y)
					{
						printf("%d %d %d\n", i, j, k);
					}
				}
			}
		}
	}
	return 0;
}