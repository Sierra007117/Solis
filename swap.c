#include <stdio.h>  
int main()
{  
  int n;
  int a[102];
  int i;
  int index=1;
  int t;
  
  scanf("%d",&n);
    for(i=1;i<=n;i++)
  scanf("%d",a+i);
    for(i=2;i<=n;i++)
    
    if(a[index]<a[i])
    index=i;
    
    t=a[index];
    a[index]=a[1];
    a[1]=t;
    
    for(i=1;i<=n;i++)
  printf("%d ",a[i]);
    return 0;  
}