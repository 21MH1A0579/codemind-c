#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	while(n>=1)
	{
     for(i=1;i<=n;i++)
	 {
		printf("%d",i);
	 } 
	 printf("
");
	 n--;
    }
}