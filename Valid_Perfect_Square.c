#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        int flag=0;
        int x;
        scanf("%d",&x);
        for(int i=1;i<x;i++)
        {
            if(i*i==x)
            {
                printf("True
");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("False
");
        }
    }
}