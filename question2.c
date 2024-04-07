#include<stdio.h>
#include<math.h>
 int main () {
    float x,y,p,q,r,d;
    printf("center points (x,y)\n");
    scanf("%f%f", &x,&y);
    printf("p,q\n");
    scanf("%f%f",&p,&q);
    printf("radius\n");
    scanf("%f",&r);
    d=sqrt(pow(p-x,2)+pow(q-y,2));
    if (d==r) {
        printf("on\n");
    }
    else if (d>r){
        printf("outside\n");
    }
    else {
        printf("inside\n");
    }
    return 0;
 }