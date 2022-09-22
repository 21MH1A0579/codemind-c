#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==b-1 || a+9==b || b==a-1 || b+9==a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}