#include<iostream>
#include<string>
using namespace std;
// Constructor 
class student{
    public:
    int id;
    string name;
    string course;h
    string dept;
//Non-Parameterized Constructor
    student(){   // Here student() is a constructor
        cout<<"This is a constructor"<<endl;
        dept = "It";
    }
// Parameterized Constructor
    student(int i, string n, string c, string d){
        cout<<"This is a constructor"<<endl;
        this->id = i;
        this->name = n;
        this->course = c;
        this->dept = d;
        
    }
    void details(){
        cout<<"Id = "<<this->id<<endl;
        cout<<"Name = "<<this->name<<endl;
        cout<<"Course = "<<this->course<<endl;
        cout<<"Dept = "<<this->dept<<endl;
    }
    // syntax of creating copy constructor
    student(student &h){  //pass by reference
        this->id = h.id;
        this->name = h.name;
    }
};
int main() {
    student s;
    student s2;
    s.dept = "Management";
    cout<<s.dept<<endl;
    cout<<s2.dept<<endl;
    student s3(124,"saurabh","bscit","it");
    s3.details();// Parameterized constructor
    student s4(s3); // Copy Operator
    s4.details();
    s4.course = "cs";
    s4.details();
    

    return 0;
}