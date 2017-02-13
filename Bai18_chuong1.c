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
        s+=(float)(pow(x,2*i))/(float)gThua(2*i);
    }
    printf("\nS = %f",s);
}

int gThua(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}

