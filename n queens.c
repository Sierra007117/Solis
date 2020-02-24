#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
int sum=0;
bool place(int k)
{
	int i;
	for(i=1;i<=k-1;i++)
	{
		if(a[i]==a[k]||abs(i-k)==abs(a[i]-a[k]))
		return false;
	}
	return true;
}
void nqueen(int t)
{
	int i,j;
	if(t==n+1)
	{
		for(i=1;i<=n;i++)
		    printf("%d ",a[i]);
		printf("\n");
		sum++;
	}
	else
	{
		for(j=1;j<=n;j++)
		{
			a[t]=j;
			if(place(t))
			    nqueen(t+1);
	  }
	}
}
int main()
{
	scanf("%d",&n);
	nqueen(1);
	cout<<sum;
	return 0;
}