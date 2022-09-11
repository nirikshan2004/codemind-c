#include<stdio.h>
int main()
{
    int arr[100],b[100],c=0,p=0,h=0,i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(arr[i]>b[i])
        {
            c=c+1;
            
        }
        else if(arr[i]<b[i])
        {
            p=p+1;
        }
        else
        {
            h=h+1;
        }
    }
    printf("%d %d",c,p);
}