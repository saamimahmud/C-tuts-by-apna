#include<stdio.h>
int second_highest(int a[] , int  ); 
void main() { 
  int a[10] ; 
  for(int i=0;i<10;i++)
  {
  scanf("%d",a[i]);
  }
  int result= second_highest(a,10);
  for(int i=0;i<10;i++)
  {
    printf(" %d ", a[i]);
  }
 
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