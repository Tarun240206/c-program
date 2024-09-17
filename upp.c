#include<stdio.h>
void main()
{
char ch;
printf("enter any character:");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
printf("%c is a lowercase alphabet",ch);
else if(ch>='A' && ch<='Z')
printf("%c is an uppercase alphabet",ch);
}

