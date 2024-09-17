#include<stdio.h>
void main()
{
int n1,n2,max;
printf("enter 2 numbers n1,n2:");
scanf("%d%d",&n1,&n2);
if(n1>n2)
max=n1;
else if(n2>n1)
max=n2;
printf("max is %d",max);
}
