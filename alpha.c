#include<stdio.h>
void main()
{
char ch;
printf("enter any character:");
scanf("%c",&ch);
if((ch>='a') && (ch<='z')||(ch>='A') && (ch<='Z'))
printf("%c is an alphabet",ch);
else
printf("%c is not an alphabet",ch);
}
