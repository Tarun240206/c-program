#include<stdio.h>
void main()
{
char ch;
printf("enter any character:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf(" 5 points",ch);
else if(ch>='0' && ch<='9')
printf("10 points",ch);
else
printf("0 points",ch);
}