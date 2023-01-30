#include<stdio.h>
void main()
{
int a,b,sum,difference,product,division,mod,less_than,greater_than,equal,not_equal,logical_and,logical_not,bitwise_and,pre_inc,post_inc;
printf("enter a and b values");
scanf("%d%d",&a,&b);
sum=a+b;
difference=a-b;
product=a*b;
division=a/b;
mod=a%b;
greater_than=a>b;
less_than=a<b;
equal=(a==b);
not_equal=(a!=b);
logical_and=a&&b;
logical_not=a;!b;
bitwise_and=a&b;
pre_inc=++a;
post_inc=a++;
printf("%d,\n%d,\n%d,\n%d,\n%d,\n%d,\n%d,\n%d,\n%d,\n%d,\n%d,\n%d,\n%d,\n%d",sum,difference,product,division,mod,less_than,greater_than,equal,not_equal,logical_and,logical_not,bitwise_and,pre_inc,post_inc);
return;
}
