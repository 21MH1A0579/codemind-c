#include<stdio.h>
int main()
{
    char str[100];
    int i,vc=0,cc=0,dc=0,wc=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vc++;
        }
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vc++;
        }
        else if(str[i]>='0'&& str[i]<='9')
        {
            dc++;
        }
        else if(str[i]==' ')
        {
            wc++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            cc++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            cc++;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",vc,cc,dc,wc);
}