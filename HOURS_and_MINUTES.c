#include<stdio.h>
int main()
{
    int mn,m,h;
    scanf("%d",&mn);
    h=mn/60;
    m=mn%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
    
}