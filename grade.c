#include<stdio.h>
void main()
{
int avg;
printf("enter your avg :");
scanf("%d",&avg);
if(avg>80)
printf("A Grade",avg);
else if(avg>60 && avg<=80)
printf("B Grade",avg);
else if(avg>40 && avg<=60)
printf("C Grade",avg);
else if(avg<=40)
printf("F Grade",avg);
}

 

