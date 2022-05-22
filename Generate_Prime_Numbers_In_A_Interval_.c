#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<(n/2)+1;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
    	return 0;
	}
}
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    if(m==1)
    {
        m=m+1;
    }
    for(i=m;i<n;i++)
    {
        if(prime(i))
        {
            printf("%d
",i);
        }
    }
}