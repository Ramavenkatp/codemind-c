#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,ar;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)*0.5;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",ar);
}