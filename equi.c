#include<stdio.h>
void main()
{
int a,b,c;
printf("enter sides of a triangle a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
printf("equilateral triangle");
else if(a==b||b==c||c==a)
printf("isosceles triangle");
else
printf("scalene triangle");
}