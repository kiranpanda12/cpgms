#include<stdio.h>
void main()
{
int gross,b,da,ha;
printf("Enter the basic salary:\n");
scanf("%d",&b);
ha=(20*b)/100;
da=(40*b)/100;
gross= b+da+ha;
printf("The gross salary of the person is:%d\n",gross);
}
