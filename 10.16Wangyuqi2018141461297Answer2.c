#include<stdio.h> 
#include<math.h>
int main()
{
	double a,b,c,x1,x2,delta;
	printf("请依次输入方程ax^2+bx+c=0中a、b、c的值\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta<0)
		printf("该方程没有实数解");
	else if(delta>0)
	{
		x1=(0-b+sqrt(delta))/(2*a);
		x2=(0-b+sqrt(delta))/(2*a);
		printf("x1=%lf\nx2=%lf",x1,x2);
	}
	else 
		printf("x=%lf",-1*b/(2*a));
	return 0;
	
}
