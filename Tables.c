#include<stdio.h>
int main()
{
    int n,size,i;
    scanf("%d%d",&n,&size);
    for(i=1;i<=size;i++)
    {
        if(i%2==1)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
}