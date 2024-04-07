#include <stdio.h>
int main () {
    int number;
    printf("enter a number : ");
    scanf("%d",&number);
     int count =0;
    while(number>0) 
    {
        int digit= number%10 ;
        if(digit%2!=0){
            count ++;
        }
        number/10;
        }
        printf("total numer of off digits : %d", count);
        return 0;
    }