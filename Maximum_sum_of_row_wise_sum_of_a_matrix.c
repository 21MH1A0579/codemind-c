#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,a[100][100],i,j,sum=0,max=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
           sum+=a[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%d ",max);
}