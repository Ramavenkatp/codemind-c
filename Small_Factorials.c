#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        int fact=1;
        for(int j=1;j<=a;j++)
        {
            fact=fact*j;
        }
        printf("%d
",fact);
    }
}