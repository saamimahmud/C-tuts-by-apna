#include<stdio.h>

int main(){
    int s=0,avg;
    int age[5];
    printf("enter ages \n");
    for(int i=0;i<5;i++){
        scanf("%d",&age[i]);
        if (age[i]==0)
        continue;
        
    }
    for(int i=0;i<5;i++){
        s=s+age[i];
    }
    avg=s/5;
    printf("average is: %d",avg);
    return 0;
}