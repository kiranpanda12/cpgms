#include<stdio.h>
void main()
{
int a,b,add,s,m,d,r;
printf("Enter two numbers a & b:\n");
scanf("%d %d",&a,&b);
add=a+b;
s=a-b;
m=a*b;
d=a/b;
r=a%b;
printf("The addition is:%d\n",add);
printf("The substraction is:%d\n",s);
printf("The multiplication is:%d\n",m);
printf("The division is:%d\n",d);
printf("The reminder is:%d\n",r);
}
