#include<stdio.h>
void main()
{
int a,b,c;
printf("enter sides of a triangle a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if((a+b>c) && (a+c>b) && (b+c>a))
printf("valid triangle");
else
printf("invalid triangle");
}