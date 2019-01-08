#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		char a[110], b[2] = "A";
		scanf("%s", &a);
		if (strcmp(a, "SCU\n") == 0)
			printf("YES");
		else if (strstr(a, "SCU") == NULL)
			printf("NO\n");
		else if (strstr(a, "SCU") != NULL)
		{
			int x = strspn(a,b);
			int y = strspn(&a[x + 3], b);
			if (x + y + 3 == strlen(a))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}