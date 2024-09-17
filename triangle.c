#include<stdio.h>
void main()
{
int a,b,c;
printf("enter angles of a triangle a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if((a+b>c) && (a+c>b) && (b+c>a) && (a+b+c==180))
printf("%d is a valid triangle",a,b,c);
else
printf("%d is an invalid triangle",a,b,c);
}