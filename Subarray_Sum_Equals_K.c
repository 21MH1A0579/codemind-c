#include<stdio.h>
int main()
{
    int n,k,arr[100],i,j,sum=0,c=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    
}