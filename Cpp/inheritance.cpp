#include<iostream>
#include<string>
using namespace std;
class college{ //BASE CLASS
    public:
    string name = "ABC";
};
//DECLARATION OF INHERITED CLASS
class student: public college{ //CHILD CLASS
    public:
    int id;
    // string name;
};
class dept: public student{
    public:
    string dept_name;

};
int main() {
    student s1;
    dept d1;
    d1.dept_name = "it";
    cout<<s1.name<<endl;
    cout<<d1.dept_name<<endl;

    return 0;
}