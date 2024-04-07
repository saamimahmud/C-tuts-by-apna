#include<stdio.h>
int factorial(int);
int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact ;
}
void main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    int result=factorial(num);
    printf("factorial of %d is %d\n", num, result);
    
}