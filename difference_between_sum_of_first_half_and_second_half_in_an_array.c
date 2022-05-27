#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,a=0,b=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        a+=arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        b+=arr[i];
    }
    diff=abs(a-b);
    printf("%d",diff);
}