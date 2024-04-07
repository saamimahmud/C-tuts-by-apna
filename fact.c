#include<stdio.h>
void main (){
    int n ;
    printf("enter number ");
    scanf("%d",&n);

    int fact =1;
    for(int i=n;i>0;i--){
        fact=fact*i;
    }
    printf("%d",fact);
}