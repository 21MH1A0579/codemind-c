#include<stdio.h>
#include<math.h>
int main()
{
    
    int p,r,t,ci;
    scanf("%d%d%d",&p,&r,&t);
    double res=pow(1+(r/100.00),t);
    printf("%.2f",res*p);
}