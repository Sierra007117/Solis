#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n;
    int i;
    int j;
    int len=1;
    int c;
    int t;
    cin >> n;
    a[1]=1;
    for(i=2;i<=n;i++)
    {
        c=0;
        for(j=1;j<=len;j++)
        {
          a[j]=a[j]*i;
        }
        for(j=1;j<=len;j++)
        {
          t=c;
          a[j]=a[j]+c;
          c=a[j]/10;
          a[j]=a[j]%10;
        }
        while(c>0)
        {
          len++;
          t=c;
          a[len]=t%10;
          c=t/10;
        }
    }
    for(t=len;t>=1;t--)
    cout << a[t];    
    return 0;
}