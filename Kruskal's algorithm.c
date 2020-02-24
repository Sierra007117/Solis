#include<stdio.h>
#include<algorithm>
using namespace std;
int f[1002];
int findtayef(int x)
{
	int tayef;
	if(f[x]==x)
	tayef=x;
	else
	tayef=findtayef(f[x]);
	f[x]=tayef;
	return tayef;
}
struct edge
	{
		int a,b;
		int w;
	}
node[2000];
bool cmp(edge x,edge y)
{
	if(x.w>y.w)
	return false;
	else
	return true;
}
int main()
{
	int n,m;
	int i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++)
	scanf("%d%d%d",&node[i].a,&node[i].b,&node[i].w);
	sort(node+1,node+m+1,cmp);
	for(i=1;i<=m;i++)
	f[i]=i;
	int eg=0;
	int total=0;
	for(i=1;i<=m;i++)
	{
		int fa,fb;
		fa=findtayef(node[i].a);
		fb=findtayef(node[i].b);
		if(fa!=fb)
		{
			eg++;
			total=total+node[i].w;
			f[fb]=fa;
			if(eg==n-1)
			break;
		}
	}
	printf("%d",total);
	return 0;
}