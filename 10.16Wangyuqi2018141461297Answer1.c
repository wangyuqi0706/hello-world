#include<stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	printf("�������������·�����Ĳ�����a,b,c,d,e,f\nax+by=c\ndx+ey=f\n");
	scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	if(a*c==b*d && a*f==c*d && c*e == b*f)
		printf("�÷���������������");
	else if (a*e-b*d==0)
		printf("�÷������޽�");
	else 
	{ 
		x=(c*e-b*f)/(a*e-b*d);
		y=(a*f-c*d)/(a*e-b*d);
		printf("x=%lf\ny=%lf",x,y);
 	}
	return 0; 
} 	//ax+by=c
  	//dx+ey=f
