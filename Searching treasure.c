#include<stdio.h>
#include<queue>
using namespace std;
int d[100][100];
int w[100][100];
int p[100][100];
struct node
{    
     int i;
     int j;
}
co[100][100];
int main()
{    
     int m,n;
     int i,j;
     scanf("%d%d",&m,&n);
     for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
     scanf("%d",&d[i][j]);
     w[m][n]=d[m][n],p[m][n]=0;
     for(i=n-1;i>=1;i--)
     {
                        w[m][i]=w[m][i+1]+d[m][i];
                        p[m][i]=1;
     }
     for(i=m-1;i>=1;i--)
     {
                        w[i][n]=w[i+1][n]+d[i][n];
                        p[i][n]=2;
     }
     for(i=m-1;i>=1;i--)
     for(j=n-1;j>=1;j--)
     {
                        if(w[i][j+1]>w[i+1][j])
                        {
                                               w[i][j]=w[i][j+1]+d[i][j];
                                               p[i][j]=1;
                        }
                        if(w[i][j+1]<w[i+1][j])
                        {
                                               w[i][j]=w[i+1][j]+d[i][j];
                                               p[i][j]=2;
                        }
                        if(w[i][j+1]==w[i+1][j])
                        {
                                                w[i][j]=w[i+1][j]+d[i][j];
                                                p[i][j]=3;
                        }
     }
     queue<node> q;
     node t;
     int sum=1;
     for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
     {
        co[i][j].i=i;
        co[i][j].j=j;
     }
     q.push(co[1][1]);
     while(!q.empty())
     {
                    t=q.front();q.pop();
                    i=t.i;
                    j=t.j;
                    if (p[i][j]==1)
                      {
                                    q.push(co[i][j+1]);
                      }
                      if(p[i][j]==2)
                      {
                                    q.push(co[i+1][j]);
                      }
                      if(p[i][j]==3)
                      {
                                    q.push(co[i][j+1]);
                                    q.push(co[i+1][j]);
                                    sum++;
                                    }
                      }
                      printf("%d %d",w[1][1],sum);
                      return 0;
}