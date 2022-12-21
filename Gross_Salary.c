#include<stdio.h>
int main()
{
    int bs;
    scanf("%d",&bs);
    float gs;
    if(bs<=10000)
    {
        gs=bs+bs*0.8+bs*0.2;
    }
    else if(bs<=20000)
    {
        gs=bs+bs*0.9+bs*0.25;
    }
    else if(bs>20000)
    {
        gs=bs+bs*0.95+bs*0.3;
    }
    printf("%.2f",gs);
}