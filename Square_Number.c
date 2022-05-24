#include<stdio.h>
int sqr(int n)
{
    int i,c=0;
    for(i=1;i<n;i++)
    {
        if(i*i==n)
        {
            c=1;
            return 1;
        }
        else
        {
            c=0;
        }
    }
    if(c==0)
    {
       return 0; 
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(sqr(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}