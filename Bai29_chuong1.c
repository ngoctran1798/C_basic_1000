#include <stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
	for(i=n;i>=1;i--)
    {
        if(n%i==0)
        {
            if(i%2!=0)
            printf("\nUoc le lon nhat cua %d la: %d",n,i);
        
            
        }
    }
}
