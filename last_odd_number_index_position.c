#include<stdio.h>
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n;i>=1;i--)
    {
        if(arr[i]%2==1)
        {
            printf("%d",i);
            break;
        }
    }
}