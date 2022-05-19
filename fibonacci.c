#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d %d ",a,b);
    while(n-2)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        n--;
    }
}