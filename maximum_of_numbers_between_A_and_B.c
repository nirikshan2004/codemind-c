#include<stdio.h>
int main()
{
    int n,arr[100],a,b,i,c=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if((arr[i]<=a&&arr[i]>=b)||(arr[i]>=a&&arr[i]<=b))
        {
           if(max<arr[i])
           {
               max=arr[i];
               c++;
           }
        }
    }
    if(c!=0)
    {
        printf("%d",max);
    }
    else
    {
    printf("-1");
    }
}