#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int a[102];
    int b[102];
    int i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        scanf("%d",&b[i]);
        sort(a+1,a+n+1);
        sort(b+1,b+n+1);
        int flag=0;
        if(n%2==1)
        {
            printf("NO\n");
        }
        else
        {
            for(i=1;i<=n/2;i++)
            if(a[i]>b[i+n/2])
            flag=1;
            if(flag==0)
            {
                for(i=1;i<=n/2;i++)
                if(a[i+n/2]<b[i])
                flag=1;
            }
            if(flag==0)
            printf("YES\n");
            else
            printf("NO\n");
        }
    }
    

    return 0;

}
