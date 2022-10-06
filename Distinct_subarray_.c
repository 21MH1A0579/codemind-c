#include<stdio.h>
int main()
{
    int a,b,sum=0,i,j,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        sum=0;
        for(j=i;j<=b;j++)
        {
            sum+=j;
            if(sum%2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}