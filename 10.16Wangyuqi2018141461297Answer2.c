#include<stdio.h> 
#include<math.h>
int main()
{
	double a,b,c,x1,x2,delta;
	printf("���������뷽��ax^2+bx+c=0��a��b��c��ֵ\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta<0)
		printf("�÷���û��ʵ����");
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
