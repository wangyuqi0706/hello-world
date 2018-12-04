#include<stdio.h>
int main()
{
	double v, d;
	int i, time;
	scanf_s("%lf %lf", &v, &d);
	while (v*d)
	{
		i = 1, time = 0;
		while (1)
		{
			for (int k = 1; k <= i; k++)
			{
				v -= d;
				time++;
				if (v <= 0)
					break;
			}
			i++;
			if (v <= 0)
				break;
			time++;
		}
		printf("%d\n", time);
		scanf_s("%lf %lf", &v, &d);
	}
	return 0;
}