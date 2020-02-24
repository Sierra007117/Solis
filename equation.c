#include<iostream>
#include<cstdio>
using namespace std;
double a,b,c,d;
double f(double x)
{
	return a*x*x*x+b*x*x+c*x+d;
}
int main()
{
	double y1,y2,l,r,m,i;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	for (i=-100.0;i<=100.0;i++)
	{
		y1=f(i);
		y2=f(i+1);
		if (y1==0.0) printf("%.2lf ",i);
		if(y1*y2<0.0)
		{
			l=i,r=i+1.0;
			while(r-l>=0.001)
			{
				m=(l+r)/2;
				if(f(l)*f(m)<0) r=m;
				if(f(m)*f(r)<0) l=m;
				}
				printf("%.2lf ",m);
			}
		}
		return 0;
}