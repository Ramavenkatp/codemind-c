#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='a' && c<='z')
    {
        printf("lowercase alphabet");
    }
    else if(c>='A' && c<='Z')
    {
        printf("uppercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}