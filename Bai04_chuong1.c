#include<stdio.h>
void main()
{
	int n,i;;
	float s;
	scanf("%d",&n);
	s=0;
	for (i=1;i<=n;i++)
	s+=(float)1/(2*i);
	printf("tong la: %0.2f",s);
}
