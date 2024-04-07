#include<stdio.h>
#include<math.h>
int main ()
{
    int a,x,y ;
    printf("Enter the number that you want to be powered : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&y);
    a= pow(x,y);
    printf("%d", a);
    return 0;

}