#include<stdio.h>
int main()
{
int phy,chem,bio,maths,comp;
float percentage;
printf("enter the values of phy,chem,bio,maths,comp:");
scanf("%d%d%d%d%d",&phy,&chem,&bio,&maths,&comp);
percentage=(phy+chem+bio+maths+comp)/5.0;
printf("percentage=%.2f\n",percentage);
if(percentage>=90)
{
printf("grade A");
}
else if(percentage>=80)
{
printf("grade B");
}
else if(percentage>=70)
{
printf("grade C");
}
else if(percentage>=60)
{
printf("grade D");
}
else if(percentage>=40)
{
printf("grade E");
}
else if(percentage<40)
{
printf("grade F");
}
}



