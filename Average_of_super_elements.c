#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,sum=0,nc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(arr[i]==c)
        {
           sum+=arr[i];
           nc++;
           arr[i]=0;
        }
    }
    if(nc==0)
    {
        printf("-1");
    }
    else
    {
       float k=((sum*1.0)/(nc/1.0));
        printf("%.2f",k);
    }
}