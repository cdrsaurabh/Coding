#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
    };
    
    void main(){
    struct student ECE[100];
    struct student OCE[100];
    struct student IT[100];
    struct student s1 = {"Saurabh",37,8.4};
    
    IT[0].roll=200;
    IT[0].cgpa=8.7;
    struct student *ptr = &s1;
    printf("%d",(*ptr).roll);
    printf("\n%d",ptr->roll);
    
  }  