#include<stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	printf("请依次输入如下方程组的参数，a,b,c,d,e,f\nax+by=c\ndx+ey=f\n");
	scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	if(a*c==b*d && a*f==c*d && c*e == b*f)
		printf("该方程组有无穷多组解");
	else if (a*e-b*d==0)
		printf("该方程组无解");
	else 
	{ 
		x=(c*e-b*f)/(a*e-b*d);
		y=(a*f-c*d)/(a*e-b*d);
		printf("x=%lf\ny=%lf",x,y);
 	}
	return 0; 
} 	//ax+by=c
  	//dx+ey=f
