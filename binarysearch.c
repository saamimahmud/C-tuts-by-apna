#include <stdio.h>
int binarysearch(int a[],int item,int l,int r){
    while(l<=r){
        int mid = (l+r)/2;
        if(mid==item){
            return mid;
        }
        if(item<mid){
            r= mid-1;
        }
        else{
            l=mid+1;
        }
        
        
    }
    return -1;
}

int main(){
    int a[10]= {3,7,9,10,15,17,19,27,29,69};
    int size=sizeof(a)/sizeof(a[0]);
    int l=0;
    int r=9;
    int item =7;
    int result =binarysearch(a,9,l,r);
    if(result==-1){
        printf("element not found.");
    }
    else{
        printf("element is present at index: %d",result);
    }

return 0;
}