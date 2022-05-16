#include<stdio.h>
int main()
{
    int n,i,ec=0,oc=0,arr[100],res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ec+=arr[i];
        }
        if(arr[i]%2==1)
        {
            oc+=arr[i];
        }
    }
    res=ec-oc;
    if(res<0)
    {
        res=res*-1;
    }
    printf("%d",res);
}