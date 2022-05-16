#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            c+=1;
        }
        
    }
    printf("%d",c);
}