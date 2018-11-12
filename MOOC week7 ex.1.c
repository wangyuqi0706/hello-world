#include<stdio.h>
#include<math.h>
int main()
{
	int a[101] = { 0 }, b[101] = { 0 }, sum[101] = { 0 };
	int x, y,first=1;
	while (1)
	{
		scanf_s("%d%d", &x, &y);
		a[x] = y;
		if (x == 0)
			break;
	}
	while (1)
	{
		scanf_s("%d%d", &x, &y);
		b[x] = y;
		if (x == 0)
			break;
	}
	for (int i = 100; i >=0; i--)
	{
		sum[i] = a[i] + b[i];
		if (sum[i] != 0)
		{			
			if (first == 0||(sum[i]<0))
			{
				if (sum[i] < 0 )
					printf("-");
				if (sum[i] > 0)
					printf("+");
			}
			if(abs(sum[i]) != 1||i == 0)
				printf("%d", abs(sum[i]));
			if (i > 0)
				printf("x");
			if (i > 1)
				printf("%d", i);
			first = 0;
		}
		if (first == 1&&i==0)
		{
			printf("0");
			first = 0;
		}
	}
	return 0;
}