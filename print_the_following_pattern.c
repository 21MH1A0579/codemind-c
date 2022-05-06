#include<stdio.h>
int main()
{
	char x;
	int n,temp,i;
	scanf("%d",&n);
	x=65;
	temp=x;
	while(temp<x+n)
	{
    	for(i=1;i<=n;i++)
	   {
	       printf("%c ",temp);
       }
       printf("
");
     temp++;
    }
}