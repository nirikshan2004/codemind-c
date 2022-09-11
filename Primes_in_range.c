#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i,fc=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            fc++;
        }
    }
    if(fc==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,m,c=0,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i==1)
        {
            continue;
        }
        if(is_prime(i))
        {
            c++;
        }
    }
    printf("%d",c);
}