#include<stdio.h>
void main(){
  // TERNARY OPERATOR
  // if else statement ko short krne ke liye use hota h
  int age;
  printf("Enter age: ");
  scanf("%d",&age);
  
    age>= 18 ? printf(" adult "): printf(" not adult");
}