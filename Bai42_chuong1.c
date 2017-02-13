#include <stdio.h>
void main()
{
    int n,k=0,s=0;
    scanf("%d",&n);
    while(s<n)
    {
        s+=k;
        k++;
    }
    printf("\nGia tri k lon nhat la: %d",k-2);

}
