#include<stdio.h>
#include<limits.h>
void main(){
int min= INT_MAX;
int m,n,i,j;
printf("%d", min);
printf("enter the size of row and column : ");
scanf("%d %d", &m, &n);
int a[m][n];
printf("enter the %d elements of array:\n", m*n);
for( i=0;i<m;i++){
    for( j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        
        if(a[i][j]<min)
        min=a[i][j];
    }
}
printf("matrix is :\n");
for( i=0;i<m;i++){
    for(j = 0;j<n;j++){
        printf(" %d ",a[i][j]);
    }
    printf("\n");
}

printf("\nMinimum = %d",min);
}
 