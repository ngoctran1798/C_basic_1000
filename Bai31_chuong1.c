#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(sqrt(n)==(int)sqrt(n)) printf("\n%d la so chinh phuong!",n);
    else printf("\n%d khong phai la so chinh phuong!",n);
}
