#include<stdio.h>
#include<math.h>
void main()
{
	float i,n,Sn=0,D=0,gThua=1,x;
	scanf("%f",&x);
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		gThua= gThua*i;
		Sn=Sn+(pow(x,i))/gThua;
	}
	printf("Sn= %f",Sn);

}

