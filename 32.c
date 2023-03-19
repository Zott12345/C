#include<stdio.h>
#include<math.h>
int main()
{
	double x,result;
	scanf("%lf",&x);
	if(x > 0)
	{
		result = pow(x,0.5);
	}
	if( x < 0)
	{
		result = pow(x+1,2)+2*x+1/x;
	}
	printf("f(%.2f) = %.2f",x,result);
}