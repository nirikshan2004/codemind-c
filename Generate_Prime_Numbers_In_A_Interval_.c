#include<stdio.h>
int main()
{
    int n,m,p=0,c,i,j;
    scanf("%d",&m);
     scanf("%d",&n);
     for(i=m;i<=n;i++)
     {
         c=0;
         for(j=1;j<=i;j++)
         {
             if(i%j==0)
             {
                 c++;
             }
         }
         if(c==2)
         {
             printf("%d
",i);
         }
     }
}