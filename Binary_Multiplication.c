#include<stdio.h>
#include<math.h>
int main(){
    int a,b,y,dec,z,t,prod;
    int sum=0;
    int sum1=0;
    printf("Enter first binary number : \n");
    scanf("%d",&a);
    printf("Enter second binary number : \n");
    scanf("%d",&b);
     for(int i=0;i<=3;i++){
        y=a%10;
        dec=y*(pow(2,i));
        sum=sum+dec;
        a=a/10;
     }
     printf("\nThe decimal of binary number one is : %d ",sum);
      for(int i=0;i<=3;i++){
        z=b%10;
        t=z*(pow(2,i));
        sum1=sum1+t;
        b=b/10;
     }
     printf("\nThe decimal of binary number two is : %d ",sum1);
prod=sum1*sum;
printf("\nThe binary multiplication = %d ",prod);
    
    return 0;
}