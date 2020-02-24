#include <stdio.h>
int main()
{
  int n;
  int i;
  int a[32];
  float sum;
  float aver;
  
    scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  
    scanf("%d",a+i);
  
  for(i=1;i<=n;i++)
  
  sum=sum+a[i];
  
  aver=(float)sum/n;
  printf("%f",aver);
  return 0;
}