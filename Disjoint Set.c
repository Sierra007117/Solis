#include<stdio.h>
int f[1002];
int findfather(int x)
{
	int father;
	if(f[x]==x)
	father=x;
	else
	father=findfather(f[x]);
	f[x]=father;
	return father;
}
int main()
{
	int n,m;
    int i;
    int a,b;
	int fa,fb;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		f[i]=i;
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&a,&b);
		fa=findfather(a);
		fb=findfather(b);
		if(fa!=fb)
		f[fb]=fa;
	}
	int result=0;
	for(i=1;i<=n;i++)
	if(f[i]==i)
	result++;
	printf("%d",result);
	return 0;
}