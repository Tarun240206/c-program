#include<stdio.h>
void main(){
int arr[]={2,5};
int i=arr[0];
int *j=&arr[0];
printf("%u\n%p\n%p\n%u",i,&i,j,*j);
}
