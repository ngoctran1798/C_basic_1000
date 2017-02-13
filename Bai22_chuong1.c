#include <stdio.h>
#include <conio.h>
void main()
    {
    	
        int s=1,i,n;
        scanf ("%d",&n);
        for (i=1;i<=n;i++)
            {
                if (n%i==0)
                  s*=i;
            }
        printf("\n tich la:%d",s);
        
    }
