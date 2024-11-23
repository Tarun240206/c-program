#include<stdio.h>
void printstr(char s[])
{
    int i=0;
    while(s[i]!='\0'){
    printf("%c",s[i]);
    i++;
}
}
void main()
{
    char str[20];
    printf("Enter the string:\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    printf("%c",str[i]);
    printf("%s\n",str);
    int length=0;
    length=strlen(str);
    printf("%d",length);
    printf("%d",sizeof(str)/sizeof(str[0]));

}

