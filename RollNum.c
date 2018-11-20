//回文数：正读与反读相等的数
//2018/11/14 更新
#include<stdio.h>
#include<string.h>
int main() 
{
	char num[100];
	scanf_s("%s", num, 100);
	int length = strlen(num);
	int isroll = 1;
	for (int i = 0; i < (length - 1)/2; i++)
	{
		if (num[i] != num[length - 1 - i])
		{
			isroll = 0;
			break;
		}
	}
	if (isroll == 1)
		printf("yes");
	else
		printf("no");
	return 0;
}
