// AIM : To write a program to find sum and avg of 10 integers.
#include <stdio.h>
int main() {
    int i=0, sum=0, number;
    float avg=0;
printf("enter 10 numbers:\n");
    while(i<10)
    {
        
        scanf("%d",&number);
        sum= sum + number;
        i++;
    }
    avg=sum/10;
    printf("sum=%d avg=%f", sum, avg);
   
     return 0;

}