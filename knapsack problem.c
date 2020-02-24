#include<stdio.h>
int m[100][1000];
int w[100];
int v[100];
int main()
{
	int c;
    int i;
    int j;
    int n;
    scanf("%d%d",&c,&n);
    for(i=1;i<=n;i++)
    scanf("%d%d",&w[i],&v[i]);
    for(i=1;i<=n;i++)
    {
	    for(j=1;j<=c;j++)
	    {
		    if(j>=w[i]&&(m[i-1][j-w[i]]+v[i]>m[i-1][j]))
		    m[i][j]=m[i-1][j-w[i]]+v[i];
	        else
	        m[i][j]=m[i-1][j];
		}
    }
    printf("%d",m[n][c]);

    return 0;
}
