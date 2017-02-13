#include<stdio.h>
void main()
{
	int i,n,s;
	scanf("%d",&n);
	s=0;
	for (i=1;i<=n;i++)
	s+=i*i;
	printf("tong la:%d",s);
}
