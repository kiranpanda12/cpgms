#include<stdio.h>
#include<math.h>
void main()
{
float x1,x2,y1,y2,d;
printf("Enter the value of x1 & y1:\n");
scanf("%f %f",&x1,&y1);
printf("Enter the value of x2 & y2:\n");
scanf("%f %f",&x2,&y2);
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("The distance is:%f\nsq.units",d);
}
