#include<stdio.h>
int main()
{
	int T;
	scanf_s("%d", &T);
	int a, b, j, t;
	for (int i = 0; i < T; i++)
	{
		scanf_s("%d %d", &a, &b);
		if (a < b)
		{
			t = a;
			a = b;
			b = t;
		}
		j = 1;
		while (1)
		{
			if ((b * j)%a==0)
			{
				printf("%d\n", b*j);
				break;
			}
			j++;
		}
	}
	return 0;
}