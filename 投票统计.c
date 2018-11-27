#include<stdio.h>
#include<string.h>
struct Candidate {
	char name[10]; //´¿×ÖÄ¸ 
	int count;
};
int main()
{
	struct Candidate a[4],t;
	char data[10];
	for (int i=0;i<3;i++)
	{
		scanf_s("%s", &a[i].name,10);
		a[i].count = 0;
	}
	a[3].count = 0;
	while (1)
	{
		scanf_s("%s", data, 10);
		if (strcmp(data,"END")==0)
			break;
		else if (strcmp(data,a[0].name)==0)
			a[0].count++;
		else if (strcmp(data,a[1].name)==0)
			a[1].count++;
		else if (strcmp(data,a[2].name)==0)
			a[2].count++;
		else
			a[3].count++;
	}
	if (strcmp(a[0].name, a[1].name) > 0) { t = a[0]; a[0] = a[1]; a[1] = t; }
	if (strcmp(a[0].name, a[2].name) > 0) { t = a[0]; a[0] = a[2]; a[2] = t; }
	if (strcmp(a[1].name, a[2].name) > 0) { t = a[1]; a[1] = a[2]; a[2] = t; }

	printf("%s:%d\n%s:%d\n%s:%d\nQQ:%d\n", a[0].name, a[0].count, a[1].name, a[1].count, a[2].name, a[2].count,a[3].count);
	return 0;
}