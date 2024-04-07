#include <stdio.h>
int linearsearch(int a[],int item,int size){
    for(int i=0;i<size;i++){
        if (a[i]==item)
        return i;
    }
    return -1;
}
int main () {
    int a[10]= {3,4,1,7,5,8,11,42,3,13};
    int size= sizeof(a)/sizeof(a[0]);
    int item = 99;
    int index = linearsearch(a,item,size);
    if(index==-1){
        printf("the element is not present in the array.");
    }
    else{
        printf("the element is present at a[%d]",index);
    }
    return 0;
}
 