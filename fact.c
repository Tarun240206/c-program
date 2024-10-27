#include<stdio.h>
int find_factorial(int n);
int main()
{
 int num, fact;
  printf("\nEnter any integer number:");
 scanf("%d",&num); 
 fact =find_factorial(num);
 
 printf("\nfactorial of %d is: %d",num, fact);
 // return 0;
}
int find_factorial(int n)
{
 
 if (n==0 && n==1)
 return(1); 
 else
 return(n*find_factorial(n-1));
 printf("%d",n*find_factorial(n-1));
}