#include <stdio.h>
int main()
{
    int a, b;
    int i,j;
    int prime;

    scanf("%d %d",&a,&b);

    if(a<2)
        a=2;
    for(i=b;i>=a;i--)
    {
        prime = 1;

        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
if(prime==1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}