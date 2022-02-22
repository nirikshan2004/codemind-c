
#include<stdio.h>
int main()
{
    int l,w,b,c,area1,area2,areat;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area1=(l+w+w)*(b+w+w);
    area2=l*b;
    areat=(area1-area2)*c;
    printf("%d",areat);
}
