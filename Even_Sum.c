#include<stdio.h>
int main()
{
    int n,arr[100],o=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            o=o+arr[i];
        }
    }
    printf("%d",o);
}
