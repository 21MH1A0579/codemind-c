#include<stdio.h>
int main()
{
    int n,arr[100],i,c,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]==0)
        {
            c++;
        }
        while(arr[i])
        {
            c++;
            arr[i]=arr[i]/10;
        }
        printf("%d ",c);
    }
}