#include<math.h>
int main()
{
int p,r,t;
float ci;
printf("enter the p,r,t");
scanf("%d%d%d",&p,&r,&t);
ci=p*pow(1+r/100,t);
printf("coumpound intrest is %f\n",ci);
return 0;
}
