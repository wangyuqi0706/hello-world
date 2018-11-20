#include<stdio.h>
#include<string.h>
struct student
{
	char name[21];//姓名
	int sno;//学号
	double chinese;//语文
	double english;//英语
	double math;//数学
	double sum;//总成绩

};
int main()
{
	int n;
	scanf_s("%d", &n);
	struct student a[1000],t;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%s", &a[i].name,21);
		scanf_s("%d", &a[i].sno);
		scanf_s("%lf", &a[i].chinese);
		scanf_s("%lf", &a[i].english);
		scanf_s("%lf", &a[i].math);
	}
	for (int i = 0; i < n; i++)
	{
		a[i].sum = a[i].chinese + a[i].english + a[i].math;
	}
	for (int i = 0; i < n; i++)//按总分排序
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j].sum > a[i].sum)
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)//字典序
	{
		for (int j = i + 1; j < n;j++)
		{
			if (a[j].sum == a[i].sum)
			{
				if (strcmp(a[i].name, a[j].name)>0)
				{
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("[name:%s,sum:%.0lf,sno:%d]\n", a[i].name, a[i].sum, a[i].sno);
	}
	return 0;
}