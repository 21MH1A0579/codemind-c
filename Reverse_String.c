#include<stdio.h>
int main()
{
	char str[100];
	scanf("%[^
]s",str);
	int j,i,len,temp;
	for(i=0;str[i]!=NULL;i++);
		len=i;
		i=0;
		j=len-1;
	while(i<j)
	{
		temp=str[j];
		str[j]=str[i];
		str[i]=temp;
		i++;
		j--;
	}
	printf("%s",str);
}
