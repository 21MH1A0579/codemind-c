#include<stdio.h>
int main()
{
    int n,arr[100],i,x,c=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%x!=0)
        {
            c++;
        }
    }
    printf("%d",c);
    
}