#include<stdio.h>
int main()
{
    int n,i,oc=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            oc+=arr[i];
        }
    }
    printf("%d",oc);
}