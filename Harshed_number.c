#include<stdio.h>
int main()
{
    int n,s=0,d,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        s=s+d;
    }
    if(temp%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}