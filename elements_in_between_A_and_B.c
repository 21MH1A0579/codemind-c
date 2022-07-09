#include<stdio.h>
int main()
{
    int n,i,arr[100],a,b,j,sum=0,max=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        for(j=a;j<=b;j++)
        {
            if(arr[i]==j)
            {
              printf("%d ",arr[i]);
              c=1;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}