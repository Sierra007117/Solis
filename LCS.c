#include<stdio.h>
#include<string.h>
char x[100],y[100];
int f[100][100],p[100][100];
int m,n;
void lcs(int a, int b)
{
    if(p[a][b]==0)return;
	if(p[a][b]==1)    
	{
		lcs(a-1,b-1);
		printf("%c",x[a]);
	}
	if(p[a][b]==2)
	{
		lcs(a,b-1);
	}
	if(p[a][b]==3)
	{
		lcs(a-1,b);
	}
}
int main()
{
	int i,j;
	scanf("%s",x+1);
	m=strlen(x+1);
	scanf("%s",y+1);
	n=strlen(y+1);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i]==y[j])
			{
				f[i][j]=f[i-1][j-1]+1;
				p[i][j]=1;
			}
			else if(f[i][j-1]>f[i-1][j])
			{
				f[i][j]=f[i][j-1];
				p[i][j]=2;
			}
			else
			{
				f[i][j]=f[i-1][j];
				p[i][j]=3;
			}
		}
	}
	printf("%d\n",f[m][n]);
	lcs(m,n);
	return 0;
}