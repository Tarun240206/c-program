#include<stdio.h>
void main()
{
int amt;
int discount;
printf("enter the amount:",amt);
scanf("%d",&amt);
if(amt>=0 && amt<=1000)
{
discount=amt-(0.05*amt);
printf("%d is the discount",discount);
}
else if(amt>=1001 && amt<=5000)
{
discount=amt-(0.1*amt);
printf("%d is the discount",discount);
}
else if(amt>=5001 && amt<=10000)
{
discount=amt-(0.2*amt);
printf("%d is the discount",discount);
}
}
