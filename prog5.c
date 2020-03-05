#include<stdio.h>
void main()
{
float a,b,c,d,e,t,A;
printf("Enter the marks of five different subjects:\n");
scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
t= a+b+c+d+e;
A= t/2.0;
printf("The total of the 5 subjects are:%f\n",t);
printf("The average of 5 subjects are:%f\n",A);
}
