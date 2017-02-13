#include <stdio.h>
void main()
{
    int n,i,s=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        
         if(i%2!=0)   s*=i;
    
    }
    printf("Tich cac uoc so le %d la: s = %d",n,s);
}

