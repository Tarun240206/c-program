#include<stdio.h>
void main(){
int a=5;
int*ptr;
int** ptr2ptr;
ptr=&a;
ptr2ptr=&ptr;
printf("%d\n",a);
printf("%d\n",&a);
printf("%p\n",&a);
printf("%d\n",*&a);
printf("Value at ptr=%p\n",ptr);
printf("Value at *ptr=%p\n",*ptr);
printf("Value at *ptr2ptr=%p\n",*ptr2ptr);
}