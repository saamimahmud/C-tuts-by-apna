#include<stdio.h>
void main(){
int m,n,min;
int a[m][n];
printf("enter m and n : ");
scanf("%d%d",&m,&n);
printf("enter the elements of array:");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        if(a[i][j]<min)
        min=a[i][j];
    }
}
printf("\nMinimum = %d",min);
}
 