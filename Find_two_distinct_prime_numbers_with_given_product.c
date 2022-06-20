#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<(n/2)+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    if(n<2)
    {
        printf("-1");
    }
    for(i=2;i<n;i++)
    {
        if(prime(i))
        {
           for(j=2;j<n;j++)
            {
                if(prime(j))
                {
                    if(i*j==n)
                    {
                       printf("%d ",i);
                       c=1;
                       break;
                    }
                }
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}
