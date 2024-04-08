#include <stdio.h>

int main() {
   
    float x,y;
    printf("enter a point - (x,y)\n");
    scanf("%f%f",&x,&y);
    if(x==0 && y!=0){
        printf("on y axis");
    }
    else if(x!=0 && y==0){
        printf("on x axis");
    }
    else if(x==0 && y==0){
        printf("on origin");
    }
    else{
        printf("neither on x-axis nor on y-axis nor on origin");
        }
    return 0;
}