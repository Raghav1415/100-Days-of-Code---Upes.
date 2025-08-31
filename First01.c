// 🖥️
// Q1 (User Inputs, Operations & Output)
// Write a program to input two numbers and display their sum.
#include<stdio.h>
int main(){
  int a,b,sum ;
  printf("Enter number a : \nEnter number b : ");
  scanf("%d %d",&a,&b);
  sum = a+b ;
  printf("The sum of two numbers %d and %d is : %d",a,b,sum);
  return 0;
}
