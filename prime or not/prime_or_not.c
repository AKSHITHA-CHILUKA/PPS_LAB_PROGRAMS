#include<stdio.h>
void main()
{
int num,flag=0,i=0;
printf("enter the number");
scanf("%d",&num);
for(i=2;i<num/2;i++)
{
if(num%i==0)
(flag++);
}
if(flag==0){
printf("prime");
}
else
{
printf("not prime");
}
return;
}
