#include <stdio.h>
#include <string.h>
// structures
typedef struct student
{
    char name[100];
    int roll;
    double cgpa;
} stu; // stu is a nickname for student
void stu_info(stu s1,stu s2){
    printf("roll of s2 is %d\n", s2.roll);
    printf("name of s2 is %s\n", s2.name);
    printf("roll of s1 is %d\n", s1.roll);
}
void greetings(int num){
int i;
for(i=0;i<=num;i++){
    printf("hello\n");
}
}


int main()
{
    stu s1={"Saurabh",37,8.9};
    stu s2;     // var using nickname
    s2.roll = 38;
    s1.roll = 37;
    strcpy(s1.name, "Saurabh");
    strcpy(s2.name, "Monu");
    stu s3 = {"tanveer", 21, 8.7};
    printf("%s,%d,%2.2lf", s3.name, s3.roll, s3.cgpa);
    int n=2;
    greetings(n);
    stu_info(s1,s2);
    return 0;
}






void stud_info()
{
    stu s9={"Saurabh",37,8.9};
    stu *ptr; // ptr is a var;
    ptr=&s9; // address of s1 is stored in ptr;
    printf("Student roll is %d",(*ptr).roll);
    //stud_info();

}