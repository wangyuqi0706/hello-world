#include<stdio.h>
int main()
{
	int n, max[100],mark[100],exist=0;
	scanf_s("%d", &n);
	int a[100][100];
	for (int i = 0; i < n; i++)//��������
	{
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	//�ҳ�ÿ�����Ԫ�ص��±�
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == 0)
				max[i] = a[i][0];
			if (a[i][j] > max[i])
			{
				max[i] = a[i][j];
				mark[i] = j;
			}
		}
	}
	//���ÿ�����Ԫ���Ƿ��������е���СԪ��
	int min;
	for (int i = 0; i < n; i++)
	{
		min = 1;
		for (int j = 0; j < n; j++)
		{
			if (a[j][mark[i]] < max[i])
			{
				min = 0;
				break;
			}

		}
		if (min == 1)
		{
			printf("%d %d", i, mark[i]);
			exist = 1;
			break;
		}
	}
	if (exist == 0)
		printf("NO");
	return 0;
}