#include<stdio.h>
int main() {
    float x1,y1,x2,y2,x3,y3,a,b;
    printf("Enter points (x1,y1)\n");
    scanf("%f%f", &x1,&y1);
    printf("Enter Points(x2,y2)\n");
    scanf("%f%f",&x2,&y2);
    printf("Enter Points (x3,y3)\n");
    scanf("%f%f",&x3,&y3);
    a=(y2-y1)/(x2-x1);
    b=(y3-y2)/(x3-x2);
    if(a==b)
    {
        printf("All 3 points lie on the same line \n");
    }
    else {
        printf(" All 3 points do not lie on the same line\n");
    }
    return 0;
}