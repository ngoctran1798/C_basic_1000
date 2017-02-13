#include<stdio.h>
void main()
{
	float s,n,i;;
	scanf("%f",&n);
	s=0;
	for (i=1;i<=n;i++)
	s+=(i/(i+1));
	printf("tong la: %f",s);
}
