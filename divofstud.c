#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    printf("enter marks of 5 subjects (0-100) : \n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);

  int  totalmarks = sub1+sub2+sub3+sub4+sub5;
  float perc = totalmarks/5 ;
  printf("total marks of student : %d ",totalmarks);
  printf("\npercentage of marks: %f ", perc);
  if(totalmarks>500){
    printf("invalid output. enter marks from 0 to 100.");
    return 0 ;
  }

if(perc>=60){
    printf("\nFirst division ");
}
else if( perc<60&&perc>=50){
    printf("second division\n");
}
else if(perc<50&&perc>=40){
    printf("Third Division");
}
else if(perc<40&&perc>=0){
    printf("FAIL.");
}

}