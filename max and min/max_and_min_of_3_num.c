#include<stdio.h>
void main()
{
int firstnum,secondnum,thirdnum;
printf("enter the first number: ");
scanf("%d",&firstnum);
printf("enter the second number: ");
scanf("%d",&secondnum);
printf("enter the third number: ");
scanf("%d",&thirdnum);
if((firstnum>secondnum) && (firstnum>thirdnum))
{
printf("%d is the greatest number \n",firstnum);
if(secondnum<thirdnum)
printf("%d is the smallest \n",secondnum);
else 
printf("%d is the smallest number \n",thirdnum);
}
else if (secondnum>thirdnum)
{
printf("%d is the greatest",secondnum);
if(thirdnum<firstnum)
printf("%d is the smallest \n",thirdnum);
else 
printf("%d is the smallest \n",firstnum);
}
else
{
printf("%d is the greatest \n",thirdnum);
if(firstnum<secondnum)
printf("%d is the smallest \n",firstnum);
else
printf("%d is the smallest \n",secondnum);
}
return;
}
