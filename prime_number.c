#include<stdio.h>
int factorcount(int n)
{
    int fc=2,i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            fc++;
        }
    }
    return fc;
}
int main()
{
    int n,fc;
    scanf("%d",&n);
    fc=factorcount(n);
    if(fc==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}