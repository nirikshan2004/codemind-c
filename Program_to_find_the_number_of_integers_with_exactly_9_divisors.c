
#include<stdio.h>
int main()
{
    int i,n,j,c=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            printf("%d ",i);
            d++;
        }
    }
    printf("
Total=%d",d);
}