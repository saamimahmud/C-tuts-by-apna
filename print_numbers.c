// Aim: To WAP to find the larger number of numbers (inut by user) using conditional operator.
#include<stdio.h>
int main (){
int num1, num2, num3, num4, num5;
printf("Enter 1st Number:");
scanf("%d", &num1);
printf("Enter 2nd number :");
scanf("%d", &num2);
printf("Enter 3rd Number:");
scanf("%d", &num3);
printf("Enter 4th Number");
scanf("%d", &num4);
printf("Enter 5th Number");
scanf("%d", &num5);
if (num1>num2&& num1>num3&&num1>num4&&num1>num5)
{
    printf ("%d is the largest number", num1);

}
else if(num2>num3&&num2>num4&&num2>num5)
{
    printf("%d is the largest number", num2);

}
else if (num3>num4&&num3>num5)
{
    printf("%d is the lagest number",num3);
}
else if (num4>num5)
{
    printf("%d is the largest number",num4);
}
else{
    printf("5th Number %d is the largest.", num5);
}

    return 0 ;
}