#include<stdio.h>
int main()
{
    int n,k,arr[100],i,sum=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            temp=i;
            break;
        }
    }
    for(i=0;i<=temp;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}