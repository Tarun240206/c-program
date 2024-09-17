#include<stdio.h>
void main()
{
int n;
printf("enter any number:");
scanf("%d",&n);
if((n%5==0) && (n%11==0))
printf("%d is divisible by 5,11",n);
else
printf("%d is  not divisible by 5,11",n);
}