#include<stdio.h>
#include<math.h>
int main()
{
float a=9.8,t;
int u=0,s=3,i=1;
for(i=1;i<=10;i++,s=s+3)
{
t=u+sqrt(u*u+2*a*s);
printf("%f\n",t);
}
return 0;
}

