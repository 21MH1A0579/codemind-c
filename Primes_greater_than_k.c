#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<(n/2)+1;i++)
    {
        if(n%i==0)
        {
            c=0;
            return 0;
        }
        else
        {
           c=1;
        }
    }
    if(c==0)
    {
        return 1;
    }
    return 1;
}

int main()
{
    int n,arr[100],i,k,res,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(prime(arr[i]))
        {
        	res=arr[i];
        	if(res>=k)
        	{
        		c++;
			}
		}
    }
    printf("%d",c);
}