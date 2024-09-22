#include<stdio.h>
void main()
{
float weight,height;
float BMI;
printf("Enter the weight(kg) and height(m) of the person:",weight,height);
scanf("%f%f",&weight,&height);
BMI=weight/(height*height);
if(BMI<18.5)
printf("under weight");
else if(BMI>=18.5 && BMI<=24.5)
printf("Normal weight");
else if(BMI>24.5)
printf("Over weight");
} 