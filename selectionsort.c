#include<stdio.h>
void main() {
    int n;
     printf("size of array: ");
scanf("%d",&n);
    int a[n] ;
    printf("\nelements of array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
      printf("\nunsorted array : \n");
      for(int i=0;i<n;i++)( printf(" %d ",a[i]));
    int temp;
     for(int i=0;i<n-1;i++){
        int max =i;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[max]){
                max=j;
            }}
        temp = a[max];
        a[max]=a[i];
        a[i]=temp;      }       
    printf("\nsorted array : \n");
    for(int i=0;i<n;i++){
       printf(" %d ",a[i]);
    }}