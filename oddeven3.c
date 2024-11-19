#include<stdio.h>
void main(){
int a[3][3];
printf("Enter the data in the array:\n");
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("The array is :\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
   printf("%d\t",a[j][i]);
if(a[i][j]%2==0)
printf("%d is even\n",a[i][j]);
else
printf("%d is odd\n",a[i][j]);
}
}
}

