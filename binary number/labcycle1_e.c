#include<stdio.h>
#include<math.h>
void main()
{
int num,rem,a[10],i,j;
printf("Enter the number:");
scanf("%d",&num);
if(num>0 && num<255)
{
i=0;
while(num>=1)
{
rem=num%2;
num=num/2;
a[i]=rem;
i=i+1;
}
for(j=i-1;j>=0;j--)
printf("%d",a[j]);
}
else
printf("Enter number between 0 and 255");
return;
}
