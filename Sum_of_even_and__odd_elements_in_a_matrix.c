#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0,sum1=0;
    int a[100][100];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2==0)
            {
            sum1+=a[i][j];
            }
            if(a[i][j]%2==1)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d %d",sum1,sum);
}