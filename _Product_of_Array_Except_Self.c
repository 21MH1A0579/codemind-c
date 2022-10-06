#include<stdio.h>
int main()
{
    int n,prd;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        prd=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                prd=prd*arr[j];
            }
        }
        printf("%d ",prd);
    }
}