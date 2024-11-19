#include<stdio.h>
sumofnos(int n);
sumofnos(int n){
int sum=0;
int rem=0;
if(n==0)
return sum;
rem=n%10;
sum+=rem
sumofnos(n/10);
void main(){
int n;
printf("Enter the value of n:");
scanf("%d",n);
printf("%d is the sum",sumofnos(n/10));
}


