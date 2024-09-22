#include<stdio.h>
void main()
{
int x,y;
printf("enter the coordinates x,y:",x,y);
scanf("%d%d",&x,&y);
if(x>0 && y>0)
printf("the point lies in the first quadrant");
else if(x<0 && y>0)
printf("the point lies in the second quadrant");
else if(x<0 && y<0)
printf("the point lies in the third quadrant");
else if(x>0 && y<0)
printf("the point lies in the fourth quadrant");
}


