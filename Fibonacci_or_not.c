#include<stdio.h>
int main()
{
	int n,a,b,c,k=0;
	scanf("%d",&n);
	a=0;
	b=1;
	c=1;
    while(c<n)
	{
		c=a+b;
		a=b;
		b=c;
	}
		if(c==n)
		{
			printf("True");
		}
		else
		{
			printf("False");
		}
		
}