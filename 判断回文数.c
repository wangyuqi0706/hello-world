#include<stdio.h>
#include<string.h>
int main()
{
	int n,judge;
	char  data[1000];
	scanf_s("%d", &n);
	while (n--)
	{
		scanf_s("%s", &data,1000);
		judge = 1;
		for (int i = 0; i < strlen(data) / 2 + 1; i++)
		{
			if (data[i] != data[strlen(data) - i-1])
			{
				judge = 0;
				break;
			}
		}
		if (judge == 1)
			printf("yes");
		else
			printf("no");
		printf("\n");
	}
	return 0;
}