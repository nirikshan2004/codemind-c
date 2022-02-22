
#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[ ,A-Z,a-z]s",str);
    printf("%s",str);
}
