Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
int main(){
  int grade;
  printf("Enter your marks : ");
  scanf("%d",&grade);

  if(grade<=100 && grade>=90){
    printf("Grade A");
  }    
  else if(grade<90 && grade>=80){
    printf("Grade B");
  } 
  else if(grade<80 && grade>=70){
    printf("Grade C");
  }
  else if(grade<70 && grade>=60){
    printf("Grade D");
  }
  else if(grade<60 && grade>50){
    printf("Grade E");
  }
  else {
    printf("Grade F");
  }
  return 0;
}
