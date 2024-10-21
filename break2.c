#include<stdio.h>
void main()
{
int i=1;
double number,sum=0.0;
while(i<=10){
printf("enter n%d:",i);
scanf("%lf",&number);
if(number<0.0){
    break;
}
sum+=number;
i++;
}
printf("sum=%.2lf",sum);
}