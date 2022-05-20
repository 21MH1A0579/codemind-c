#include<stdio.h>
int main()
{
    int n,c=0,i,x,nc=0;
    scanf("%d",&n);
    x=1;
    while(x && x<=n)
    {
    	c=0;
         for(i=1;i<=x;i++)
          {
            if(x%i==0)
            {
                c++;
            }
          }
          if(c==9)
          {
            printf("%d ",x);
            nc++;
          }
          x++;
    }
    printf("
Total=%d",nc);
}