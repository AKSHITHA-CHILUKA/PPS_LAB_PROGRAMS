#include<stdio.h>
void main()
{
int choice,a,b;
float c;
printf("enter the choice");
scanf("%d",&choice);
printf("enter a and b");
scanf("%d%d",&a,&b);
switch(choice)
{
case 1:c=a+b;
printf("%f",c);
break;
case 2:c=a-b;
printf("%f",c);
break;
case 3:c=a*b;
printf("%f",c);
break;
case 4:c=a/b;
printf("%f",c);
break;
default :printf("enter the choice between 1 and 4");
break;
}
printf("end of switch case");
return;
}
