#include<stdio.h>
int sumofdigits(int);
int sumofdigits(int number){
    if(number==0){
        return 0;
    } else{
        return (number %10) + sumofdigits(number/10);
    }
}
void main(){
    int number;
    printf("enter a 4 digit number : \n");
    scanf("%d", &number);
    if(number<1000||number>9999){
        printf("Invalid input. please enter a four digit number.\n");
       
    }else{
    int sum = sumofdigits(number);
    printf("sum of digits : %d\n", sum);}
    
}