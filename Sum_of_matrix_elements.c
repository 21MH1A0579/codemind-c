#include<stdio.h>
int main()
{
	int r1,c1;
	scanf("%d%d",&r1,&c1);
	int a[r1][c1],i,j,sum=0;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			sum+=a[i][j];
		}
	}
	printf("%d",sum);
	
}