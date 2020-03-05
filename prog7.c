#include<stdio.h>
void main()
{
float celsius,farhenhite;
printf("Enter the temperature in farhenhite:\n");
scanf("%f",&farhenhite);
celsius=(farhenhite-32.0)*5.0/9.0;
printf("Temperature in celsius is: %.3f\n",celsius);
}
