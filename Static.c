#include<stdio.h>
int func()
{
auto int a=5;
static int b=5;
printf("%d %d",a,b);
a++;
b++;
}
void main(){
for(int i=0;i<5;i++)
func();

}