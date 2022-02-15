#include<stdio.h>
int main()
{
    int num,x;
    scanf("%d",&num);
    int arr[num],i=0,sum=0;
     while(i<num)
    	{
    		scanf("%d",&arr[i]);
    		sum+=arr[i];
    		i++;
    	}
    
    printf("%d",sum);
}