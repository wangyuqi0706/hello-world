#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		int i,a,s,b,d;
		s=n;
		d=0;
		for(i=0;i<n;i++)
		{
			for(b=0;b<d;b++)
			{
				if(d!=n)
				printf(" ");
			}
			for(a=0;a<2*s-1;a++)
			{
				printf("#");
			}
			printf("\n");
			s--;
			d++; 
		}
	}
	return 0;
	
} 
