#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
  int a[MAX_SIZE];
  int n;
  int i,j;
  int t;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for (j=0;j<n;j++)
    {
      if(a[j]>a[i])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
  }
}
for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}
return 0;
}