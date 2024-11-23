#include<stdio.h>
#include<string.h>
void main(){
char str[20];
printf("Enter the string:\n");
gets(str);
int length=0;
length=strlen(str);
printf("%d\n",length);

for(int j=length-1;j>=0;j--){
    str_rev[length-1]=str[j];
    puts(str_rev);
}
printf("\nReverse string");
int wordcount=0;
int count=0;
for(int i=0;str[i]!='/0';i++){
count++;
wordcount++;
}
printf("%d\n",wordcount+1);
printf("%d\n",count);

}

