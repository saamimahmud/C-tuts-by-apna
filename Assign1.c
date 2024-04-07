// Aim: WAP to find the sum and average of 10 integer numbers.
#include<stdio.h>
int main() {
    int num1, num2, num3, num4, num5,num6,num7,num8, num9, num10, sum, average;
    // accepting values of ten numbers:
    printf(:Enter value of ten Numbers:\n);
    scanf(%d %d %d %d %d %d %d %d %d %d, &num1, &num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);
    // Calculating Sum :
    sum= num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
    printf("The sum of given Ten Numbers is : %d", sum);
    // Calculating Average:
    average =(num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/10;
    printf("\n The Average of given Ten Numbers is: %d", average);
    

    return 0;
}