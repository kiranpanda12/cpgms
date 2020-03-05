#include<stdio.h>
void main()
{
int a,b;
printf("Enter any two values:\n");
scanf("%d %d",&a,&b);
if(a==b)
{
printf("Both numbers are equal:\n");
}
if(a>b)
{
printf("The number a is greater.\n");
}
if(a<b)
{
printf("The number b is greater.\n");
}
}
