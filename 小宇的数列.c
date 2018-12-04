#include<stdio.h>
#include<string.h>
int main()
{
	int a[11], case1, case2, case3;
	int b[10], c[10], d[10];
	while (1)
	{
		for (int i = 0; i < 5; i++)
		{
			scanf_s("%d", &a[i]);
		}
		if (a[0] == 0 && a[2] == 0 && a[1] == 0 && a[3] == 0 && a[4] == 0)
			break;
		case1 = case2 = case3 = 1;
		for (int i = 1; i < 4; i++)
		{
			if ((a[i] - a[i - 1]) != (a[i + 1] - a[i]))
				case1 = 0;
			if (a[i] * a[i] != a[i - 1] * a[i + 1])
				case2 = 0;
			if (a[i + 1] != a[i - 1] + a[i])
				case3 = 0;
		}
			memcpy(b, a, 5 * sizeof(int));
			memcpy(c, a, 5 * sizeof(int));
			memcpy(d, a, 5 * sizeof(int));
		for (int i = 5; i <= 9; i++)
		{
			
			if (case1)
				b[i] = b[i-1]+ (b[1] - b[0]);
			if (case2)
				c[i] = c[i-1] * (c[1] / c[0]);
			if (case3)
				d[i] = d[i - 1] + d[i - 2];
		}
		if (case1)
		{
			printf("case one\n");
			for (int i = 5; i < 10; i++)
			{
				if (i > 5)
					printf(" ");
				printf("%d", b[i]);
				if (i == 9)
					printf("\n");
			}
		}
		if (case2)
		{
			printf("case two\n");
			for (int i = 5; i < 10; i++)
			{
				if (i > 5)
					printf(" ");
				printf("%d", c[i]);
				if (i == 9)
					printf("\n");
			}
		}
		if (case3)
		{
			printf("case three\n");
			for (int i = 5; i < 10; i++)
			{
				if (i > 5)
					printf(" ");
				printf("%d", d[i]);
				if (i == 9)
					printf("\n");
			}
		}
		
	}
	return 0;
}