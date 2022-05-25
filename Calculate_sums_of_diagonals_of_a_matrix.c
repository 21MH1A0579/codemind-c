#include<stdio.h>
int main()
{
    int n,i,j,a[100][100],sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1+=a[i][j];
            }
            if(i==n-j-1)
            {
                sum2+=a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",sum1);
    printf("Secondary Diagonal:%d",sum2);
}