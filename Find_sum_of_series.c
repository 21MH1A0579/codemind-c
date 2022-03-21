#include<stdio.h>
int main()
{
    float num,sum=0,i;
    scanf("%f",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+(1/i);
    }
    printf("%.2f",sum);
}
