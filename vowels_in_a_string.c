#include<stdio.h>
int main()
{
    char str[100],k;
    int i,p,c=0;
    scanf("%[^
]s",&str[i]);
    scanf("%c",&k);
    if(k!='a'||k!='e'||k!='i'||k!='o'||k!='u'||k!='A'||k!='E'||k!='I'||k!='O'||k!='U')
    {
        scanf("%c",&k);
    }
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==k)
        {
            p=i;
            c++;
            printf("True
");
            printf("%d",p);
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    
}