#include<stdio.h>
int maximum(int a,int b,int c);
void main(){
int a,b,c;
printf("Enter the values of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
maximum(a,b,c);
}
int maximum(int a,int b,int c){
if(a>b && a>c)
printf("%d is the max",a);
else if(b>a && b>c)
printf("%d is the max",b);
else if(c>a && c>b)
printf("%d is the max",c);
}





