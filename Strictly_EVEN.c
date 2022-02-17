#include<stdio.h>
int main()
{
    int n,a[n],i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2==1)
            {
                flag=1;
                break;
            }
        
        }
    } 
    if(flag==0)
    {
        printf("True");
        
    }
    else
    {
        printf("False");
    }
}