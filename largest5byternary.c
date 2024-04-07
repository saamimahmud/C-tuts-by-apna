#include<stdio.h>
int main() {
int num;
int a[10];
    printf("enter 5 numbers : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        }
    int max=(a[0]>a[1]&&a[0]>a[2]&&a[0]>a[3]&&a[0]>a[4])? a[0]:(a[1]>a[2]&&a[1]>a[3]&&a[1]>a[4])? a[1]:(a[2]>a[3]&&a[2]>a[4])?a[2]:(a[3]>a[4])?a[3]:a[4];

    printf("%d",max);
    return 0;
}