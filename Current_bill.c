#include<stdio.h>
int main()
{
    int u;
    float b;
    scanf("%d",&u);
    if(u<=199)
    {
        b=u*1.2;
    }
    else if(u>=200&&u<400)
    {
        b=u*1.5;
    }
    else if(u>=400&&u<600)
    {
        b=u*1.8;
    }
    else if(u>=600)
    {
        b=u*2;
    }
    if(b>400)
    {
        b=b+b*0.15;
    }
    else
    {
        b=b+100;
    }
    printf("%.2f",b);
}