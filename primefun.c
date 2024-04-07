#include<stdio.h>
int isprime(int);
int isprime(int n){ 
    for(int i=2;i<n;i++){
if(n%i==0){
    return 0;
}
    }
    return 1 ;
}
void main () {
    int n1,n2;
    printf("enter number 1: ");
    scanf("%d",&n1);
    printf("enter number 2: ");
    scanf("%d",&n2);
    printf("Prime numbers between %d and %d are: ", n1,n2);
    for(int i=n1;i<n2;i++){
    if(isprime(i)){
        printf(" (%d) ", i);
    }
    }
}
