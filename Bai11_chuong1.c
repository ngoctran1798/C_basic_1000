#include<stdio.h>
#include<math.h>
void main ()
{
	int s,n,d,i;;
	scanf("%d",&n);
	s=1;
	d=1;
	for (i=0;i<=n;i++)
	s+=d*i;
	printf("tong la: %d",s);
}
