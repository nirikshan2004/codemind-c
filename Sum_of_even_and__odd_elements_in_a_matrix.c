#include<stdio.h>
int main()
{
    int n,m,arr[100][100],s=0,c=0,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]%2==0)
            {
                s=s+arr[i][j];
            }
             if(arr[i][j]%2)
             {
                 c=c+arr[i][j];
             }
        }
    }
    printf("%d %d",s,c);
}