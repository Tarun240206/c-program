#include<stdio.h>
int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  int i=0;
int sumtotal=0;
  while(i<=k) {
    sumtotal=sumtotal+i;
 i++;
  } 
  return sumtotal;
}