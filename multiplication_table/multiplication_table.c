#include<stdio.h>
void main()
{
int num,constant=5,multiply;
num=1;
while(num<=10)
{
multiply=constant*num;
printf("%d * %d = %d\n",num,constant,multiply);
num=num+1;
}
return;
}
