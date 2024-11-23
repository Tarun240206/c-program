#include<stdbool.h>
#include<stdio.h>
void swap(int* xp,int* yp){
int temp=*xp;
*xp=*yp;
*yp=temp;
}
void bubblesort(int arr[],int n){
int i,j;
bool swapped;
for(i=0;i<n-1;i++){
swapped=false;
for(j=0;j<n-i-1;j++){
if(arr[j]>arr[j+1]){
swap(&arr[j],&arr[j+1]);
swapped=true;
}
}
if (swapped=false)
break;
}
}
void printarray(int arr[],int size){
int i;
for(i=0;i<size;i++){
printf("%d\n",arr[i]);
}
}
void main(){
int arr[]={64,25,12,11,27};
int n=sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,n);
printf("Sorted array:\n");
printarray(arr,n);
}


