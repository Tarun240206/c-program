#include <stdio.h>
#include <math.h>
long decimalToBinary(int decimalnum)
{
long binarynum = 0;
int rem, temp = 1;
while (decimalnum!=0)
{
rem = decimalnum%2;
decimalnum = decimalnum / 2;
binarynum = binarynum + rem*temp; // 1 1 1 0 1
temp = temp * 10;
}//decimal number 12 12/2, 6, rem=0 , rem= 0, 3 , rem=1, 3/2=1, //rem=1, 1100
return binarynum;
}
int main()
{
int decimalnum;
printf("Enter a Decimal Number: ");
scanf("%d", &decimalnum);
//bin=decimalToBinary(decimalnum);
//printf("%ld",bin);
printf("Equivalent Binary Number is: %ld", decimalToBinary(decimalnum));
return 0;
}