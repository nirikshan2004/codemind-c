#include<stdio.h>
int main()
{
    int n,rev=0,temp,d;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}