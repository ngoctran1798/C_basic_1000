#include <stdio.h>
void main()
{
    int n,i,s=0;
  
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0) s++;
    }
    printf("So luong cac uoc cua %d la: s = %d",n,s);
}
