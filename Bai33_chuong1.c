#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n;
    float t = 0;
    scanf("%d", &n);
    int i;
    float temp = sqrt(2), temp1;
    for (i=1;i<n;i++)
    {

      temp1 = sqrt(2+temp);
      temp = temp1;
    }
    printf("%f", temp1);

}
