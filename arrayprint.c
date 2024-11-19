#include<stdio.h>
void showarray(int array[]);
void main(){
int arr[5];
printf("enter integers in an array:");
for(int i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
showarray(*arr);
}
void showarray(int array[])
{
    printf("Integers in an array:");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
}






