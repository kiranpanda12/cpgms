#include<stdio.h>
void main()
{
int t,a,b;
printf("Enter two values of a & b:\n");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("The value of a is:%d\n",a);
printf("The value of b is:%d\n",b);
}
