#include<stdio.h>
int main()
{
    int n,s=0,p=1,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        s=s+rem;
        p=p*rem;
        n=n/10;
    }
    printf("%d",p-s);
}