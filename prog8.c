#include<stdio.h>
void main()
{
int N,days,years,months,weeks;
printf("Enter the number :\n");
scanf("%d", &N);
years=N/365;
weeks=(N%365)/7;
months=N/30;
days=N-((years*365)+(weeks*7));
printf("years:%d\n",years);
printf("weeks:%d\n",weeks);
printf("months:%d\n",months);
printf("days:%d\n",days);
}
