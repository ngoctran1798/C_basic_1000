#include<stdio.h>
#include<math.h>
void main ()
{
	int t,n,i,x;
	scanf("%d%d",&x,&n);
	t=0;
	for(i=1;i<=n;i++)
	t+=pow(x,(2*i+1));
	printf("T=%d",t);
}
