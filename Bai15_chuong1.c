#include<stdio.h>
void main()
{
    int i,x,n,D=0;
    float S=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        D=D+i;
        S=S+1/D;
    }
    printf("S= %f",S);
}
