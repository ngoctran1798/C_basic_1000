#include <stdio.h>
#include <conio.h>
void main()
    {
        int s=0,i,n;
        scanf ("%d",&n);
        for (i=1;i<=n;i++)
                if (n%i==0)
		     s+=i;
        printf("tong la:%d",s);
        
    }
