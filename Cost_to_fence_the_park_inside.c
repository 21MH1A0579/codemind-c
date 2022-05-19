#include<stdio.h>
int main()
{
    int l,b,w,c,il,ib,ia,oa;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    il=l-2*w;
    ib=b-2*w;
    ia=il*ib;
    oa=l*b;
    if(l>2*w && b>2*w)
    {
    printf("%d",c*(oa-ia));
    }
    else
    {
        printf("Impossible");
    }
    
}