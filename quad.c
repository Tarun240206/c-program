#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float root1,root2,imaginary;
float discriminant;
printf("enter the values a,b,c of quadratic equation(aX^2+bX+c):");
scanf("%f%f%f",&a,&b,&c);
discriminant=(b*b)-(4*a*c);
if(discriminant>0)
{
root1=(-b+sqrt(discriminant))/(2*a);
root2=(-b-sqrt(discriminant))/(2*a);
printf("two real and distinct roots exists:%.2f and %.2f",root1,root2);
printf("\n 20 points");
}
 else if(discriminant==0)
{
root1=root2=-b/(2*a);
printf("two equal and real roots exists:%.2f and %.2f",root1,root2);
printf("\n 0 points");
}
else if(discriminant<0)
{
root1=root2=-b/(2*a);
imaginary=sqrt(-discriminant)/(2*a);
printf("two real and imaginary roots exists:%.2f+i%.2f and %.2f-i%.2f",root1,imaginary,root2,imaginary);
printf("\n 10 points");
}
}


