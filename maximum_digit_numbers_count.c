#include<stdio.h>
int main()
{
    int n,arr[100],i,min=1,c=0,dc=0,temp,temp1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        temp=arr[i];
        while(temp)
        {
            c++;
            temp=temp/10;
        }
        if(c>min)
        {
            min=c;
        }
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        temp1=arr[i];
        while(temp1)
        {
            dc++;
            temp1=temp1/10;
        }
        if(dc==min)
        {
            printf("%d ",arr[i]);
        }
    }
}