#include<stdio.h>
int sum(int x,int y);
int subtraction(int x,int y);
int multiplication(int x,int y);
int division(int x,int y);

void main(){
int x,y;
printf("enter x and y:");
scanf("%d%d",&x,&y);
printf("sum is %d\n",sum(x,y));
printf("sub is %d\n",subtraction(x,y));
printf("mult is %d\n",multiplication(x,y));
printf("div is %d",division(x,y));
 
}
int sum(int x,int y){
int result=x+y;
return result;
}

int subtraction(int x,int y){
int result=x-y;
return result;
}

int multiplication(int x,int y){
int result=x*y;
return result;

}

int division(int x,int y){
int result=x/y;
return result;
}
