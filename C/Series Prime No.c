//Akshaj Agarwal
//Prime No in Series
#include <stdio.h>
void main()
{
int i,j;
float s=0,f,n;
printf("enter any odd number");
scanf("%f",&n);
for(i=1;i<=n;i=i+2)
{
    f=1;
    for(j=1;j<=i;j++)
    {
    f=f*j;
    }
    s=s+(i/f);
}
printf("\n");
printf("%f",s);
}
