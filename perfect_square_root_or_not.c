
#include<stdio.h>
int main()
{
    int n,i=1,count=0;
    scanf("%d",&n);
    while(i<=n)
    {
    	if(i*i==n)
    	{
    		printf("True");
    		break;
		}
               	i++;     	
    }   
    if(i*i!=n)
    {
    	printf("False");
	}
}
