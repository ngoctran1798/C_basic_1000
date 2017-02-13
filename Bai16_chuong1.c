#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i;
    float T,temp ;
    scanf("%d", &n);
    T=0;
    temp=0;
    for (i=1;i<=n;i++)
    {
        T =  T + i;
        temp = temp + (float)(pow(n,i)/T);
    }
    printf("%0.2f", temp);
}

