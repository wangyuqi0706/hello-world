#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	while (x--)
	{
		int dp[100][100];
		int m, n;
		scanf_s("%d %d", &m, &n);
		for (int i = 0; i < n; i++)
			dp[0][i] = 1;
		for (int i = 0; i < m; i++)
			dp[i][0] = 1;
		for (int i = 1; i < m; i++)
		{
			for (int j = 1; j < n; j++)
			{
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
		if (m == 1 || n == 1)
			printf("1\n");
		else
			printf("%d\n", dp[m-1][n-1]);
	}
	return 0;
}
		