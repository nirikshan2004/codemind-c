#include<stdio.h>
int main()
{
    int n,i,s,m,c,r,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=n/2;
    for(i=0;i<m;i++)
    {
        
        s=s+arr[i];
    }
    for(i=m;i<n;i++)
    {
        c=c+arr[i];
    }
    r=c-s;
    printf("%d",r);
}
