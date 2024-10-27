#include<stdio.h>
int sumfibo(int n);

int main()
{
printf("Fibonacci series is %d",sumfibo(10));
}

int sumfibo(int n)
{
int sum=1;
if (n==1)
return 0;
else if(n==2)
return 1;
else
sum=sum+sumfibo(n-1)+sumfibo(n-2);
return sum;
}
