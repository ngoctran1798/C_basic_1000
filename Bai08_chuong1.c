#include<stdio.h>
#include<math.h>
void main ()
{
	float s,n,i;;
	scanf("%f",&n);
	s=0;
	for (i=0;i<n;i++)
	s+=((2*i+1)/(2*i+2));
	printf("tong la: %.3f",s);
}
