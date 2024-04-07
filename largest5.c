#include<stdio.h>
int main () {
    int a[5];
    int max;
    printf("enter 5 numbers :\n ");  
    for(int i=0;i<5;i++) 
    {
    scanf("%d",&a[i]);
    
    }
    if(a[0]>a[1]&&a[0]>a[2]&&a[0]>a[3]&&a[0]>a[4])
    printf("\nlargest number = %d", a[0]);
    else if(a[1]>a[2]&&a[1]>a[3]&&a[1]>a[4])
    printf("\nlargest number = %d", a[1]);
    else if(a[2]>a[3]&&a[2]>a[4])
    printf("\nlargest number = %d", a[2]);
    else if(a[3]>a[4])
    printf("\nlargest number = %d", a[3]);
    else
   printf("\nlargest number = %d", a[4]);

    

return 0;

}
