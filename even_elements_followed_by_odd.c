#include<stdio.h>
int main()
{
    int n,i,a,b,arr[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d ",arr[i]);
        }

    }
}