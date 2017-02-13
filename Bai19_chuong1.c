#include <stdio.h>
void main()
{
    int n,i,x;
    float s;
    scanf("%d",&x);
    scanf("%d",&n);
	s=1;
    for(i=1;i<=n;i++)
    {
        s+=(float)(pow(x,2*i+1))/(float)gThua(2*i+1);
    }
    printf("\nS = %f",s);
}

int gThua(int n)
{
    int i,s;
    s=1;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}

