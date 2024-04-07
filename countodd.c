#include <stdio.h>
int main () {
    int number , count = 0;
    printf ("Enter a number: ");
    scanf ("%d", &number);
    while (number > 0){
        int digit = number%10;
        if (digit%2 !=0)
        {
            count++;
        }
        number =number/10;
    }
    printf("total number of odd digits : %d\n", count);
    
    return 0;
}