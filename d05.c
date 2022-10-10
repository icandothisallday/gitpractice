# include <stdio.h>
int main()
{
	double a,b,c,d,e,f;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	e = d / (a+b+c+d) *100; 
	printf("%.2lf%%",e);
	
}
