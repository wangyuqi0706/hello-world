#include<stdio.h>
int f(int n, int a, int k)
{
	if (k > 100 || n < 2 || a <= 0 || k <= 0)
		return -1;
	else if (n == 2)
		return a+k;
	else
		return f(n - 1, a, k)+k;
	
		
}
int main()
{
	int n, a, k, x;
	scanf_s("%d %d %d", &n, &a, &k);
	x = f(n, a, k);
	if (x == -1)
		printf("Wrong Number");
	else
		printf("%d",x);
}