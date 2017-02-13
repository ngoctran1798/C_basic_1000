#include <stdio.h>
void main()
{
    int n,x,s;
    scanf("%d",&x);
    scanf("%d",&n);
    s = tong(x,n);

    printf("Ket qua: s = %d",s);

}

int tong(int x,int n)
{
    if(n==0) return 0;
    else return pow(-1,n+1)*pow(x,n)+tong(x,n-1);
}
