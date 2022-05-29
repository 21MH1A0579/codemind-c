#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,a[100][100],i,j,sum=0,max=0,c=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<m;i++)
        {
           sum+=a[i][j];
            if(sum>max)
             {
                 c=0;
               max=sum;
             }
        }
    }
    if(c==0)
    {
    printf("%d ",max);
    }
    else
    {
        printf("-1");
    }
}