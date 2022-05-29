#include<stdio.h>
int main()
{
    int l,i;
    char ch[100];
    scanf("%s",&ch);
    for(i=0;ch[i]!=NULL;i++)
    {
        l++;
    }
    printf("%d",l);
}