#include<stdio.h>
int main()
{
    int n,i,c=0,sum=0,avg,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=(sum/n);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
    
}