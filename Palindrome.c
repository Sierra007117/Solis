#include<stdio.h>
#include<string.h>
char x[100],y[100];
int f[100][100];
int main()
{
	int i,j,m;
	scanf("%s",x+1);
	m=strlen(x+1);
    for(i=1;i<=m;i++)
    y[i]=x[m+1-i];
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(x[i]==y[j])
			f[i][j]=f[i-1][j-1]+1;
			else if(f[i][j-1]>f[i-1][j])
			f[i][j]=f[i][j-1];
			else
			f[i][j]=f[i-1][j];
		}
	}
	printf("%d",m-f[m][m]);
	return 0;
}