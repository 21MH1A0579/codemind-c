#include<stdio.h>
int main()
{
    int n,i,arr[100],a,b,j,sum=0,min=99999,c=0;
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
                c=1;
              printf("%d ",arr[i]);
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}
