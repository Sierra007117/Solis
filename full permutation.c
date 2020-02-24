#include <stdio.h>
int a[102];
int n;
void permutation(int t)
{
  if(t==n+1)
  {
    for(int j=1;j<=n;j++)
    printf("%d ",a[j]);
    printf("\n");
  }
  else
  {
    for(int m=1;m<=n;m++)
    {
     a[t]=m;
     int flag=1;
     for(int k=1;k<=t-1;k++)
     {
       if(a[t]==a[k])
       flag=0;
     }
     if(flag==1)
     permutation(t+1);
    }
  }
}
int main()
{
  scanf("%d",&n);
  permutation(1);
  return 0;
}
