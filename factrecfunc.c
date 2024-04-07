#include<stdio.h>
int factorial(int);
void main (){
    int a;
printf("enter number : \n");
scanf("%d", &a);
 int y=factorial(a) ;
 printf("factorial of %d is %d ",a,y);
}
int factorial(int x) {
    int fact=1;
    for(int i=1;i<=x;i++){
         fact = fact*i;
    }
    return fact ;
}