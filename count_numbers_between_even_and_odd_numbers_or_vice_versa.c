#include<stdio.h>
int main()
{
    int n,i,arr[100],c,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i+2]%2==1 || arr[i]%2==1 && arr[i+2]==0)
        {
            c++;
        }
    
    }
    printf("%d",c);
}