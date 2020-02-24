#include<stdio.h>
int a[100],len[100],pre[100],n;
void LIS(int x)
{
    if(x==0)
    return;
    LIS(pre[x]);
    printf("%d ",a[x]);
}
int main(void)
{    
    int i,j,k,mx,index;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    len[1]=1;
    for(i=2;i<=n;i++)
    {
        mx=0;
        for(j=1;j<=i-1;j++)
        {
            if((a[i]>a[j])&&(len[j]>mx))
            {
                mx=len[j];index=j;
            }
        }
        len[i]=mx+1;
        pre[i]=index;
    }
    mx=0;
    for(i=1;i<=n;i++)
    {
        if(len[i]>mx)
        mx=len[i];
    }
    printf("%d\n",mx);
    LIS(n);
    return 0;
    }