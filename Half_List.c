#include<stdio.h>
int main()
{
    int n,arr[100],k[100],i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=n/2;i--)
    {
        k[j++]=arr[i];
    }
    for(i=0;i<n/2;i++)
    {
        k[j++]=arr[i];
	}
    for(j=0;j<n;j++)
    {
       printf("%d ",k[j]);
    }
}