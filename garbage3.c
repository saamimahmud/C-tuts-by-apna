#include<stdio.h>
int main(){
    int num, sum=0;
    float avg=0;
    printf("enter ten integers : ");
    for(int i=0;i<10;i++){
        scanf("%d",&num);
    sum = sum + num;
    }
    avg= sum / 10.0;
 printf("sum and avg of entered integers :\nsum = %d\t avg= %f",sum,avg);
 return 0;
    
}