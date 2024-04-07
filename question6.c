#include <stdio.h>
#include<math.h>
int main() {
int x,f=1,a=1;
printf("enter number\n");
scanf("%d",&x);

while (a<x){
    f=f*a;
    a++;
}
printf("factorial is %d",f);
    return 0;
}