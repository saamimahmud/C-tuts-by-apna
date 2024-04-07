#include <math.h>
#include <stdio.h>
 
int main(){
    int p=0,n=0,z=0,num;
    printf("enter size\n");
    scanf("%d",&num);
    int arr[num];
    printf("enter numbers in array\n");
    for (int a=0;a<num;a++){
        scanf("%d",&arr[a]);}
    for (int a=0;a<num;a++){
        if (arr[a]>0) p++;
        
        else if (arr[a]<0) n++;
        
        else if(arr[a]==0) z++;
        
        else break;
    }
    printf("%d positive %d negative %d zeroes",p,n,z);
    return 0;    

    
}