#include<stdio.h>
 int second_highest(int a[] , int  ); 
void main() { 
  int a[10] = {0,1,2,3,4,5,6,7,8,9}; int result;
  printf("Given array : ");
  for(int i=0;i<10;i++){
    printf(" %d ", a[i]);
  }
  result= second_highest(a,10);
   printf("\nsecond highest : %d ",result);
}
 int second_highest(int a[], int length )
{
  int max1,max2;
  if(a[0]>a[1])
  {
    max1=a[0];
    max2=a[1];
  }
  else 
  {
    max1=a[1];
    max2=a[0];
  }
  for(int i=2;i<length;i++)
  {
    if(a[i]>max1)
    {
    max2=max1;
    max1=a[i];
    }
    else if (a[i]>max2&&a[i]<max1){
    max2=a[i];
  } 
  }

  
  return max2;
}