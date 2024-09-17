#include<stdio.h>
void main()
{
int cp,sp;
int profit,loss;
printf("enter the values of cp,sp:");
scanf("%d%d",&cp,&sp);
if(cp>sp)
{
loss=cp-sp;
printf("%d is the loss",loss);
}
else if(sp>cp)
{
profit=sp-cp;
printf("%d is the profit",profit);
}
}
