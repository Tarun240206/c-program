#include<stdio.h>
int main()
{
int unit;
float amt,sur_charge,total_amt;
printf("enter the total units consumed:");
scanf("%d",&unit);
if(unit<=50)
{
amt=unit*0.50;
}
else if(unit<=150)
{
amt=25+((unit-50)*0.75);
}
else if(unit<=250)
{
amt=100+((unit-150)*1.20);
}
else if(unit>250)
{
amt=220+((unit-250)*1.50);
}
sur_charge=amt*0.20;
total_amt=amt+sur_charge;
printf("the electricity bill is %.2f",total_amt);
}

