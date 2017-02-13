#include<stdio.h>
#include<math.h>
void main ()
{
	int s,n,i;;
	scanf("%d",&n);
	s=1;
	for (i=1;i<=n;i++)
	s=s*i;
	printf("tong la: %d",s);
}
