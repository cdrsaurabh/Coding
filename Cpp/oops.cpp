/*#include<iostream>
#include<string>
using namespace std;
class student{ // declaration of class
    
    public: //access specifier
    int id;
    string name;
    string course;

};
int main(){
    student s1; // object declaration
    // cout<<"Please enter your name"<<endl;
    // cin>>s.name; //saurabh
    // cout<<"Please enter your ID"<<endl;
    // cin>>s.id; //28682
    // cout<<"Please enter your course"<<endl;
    // cin>>s.course; //bscit
    // cout<<"The name of the student is "<<s.name<< endl; //The name is saurabh
    // cout<<"The id is "<<s.id<<endl; //The id is 28682
    // cout<<"The course is "<<s.course<<endl;
    student s2;
    s2.name="aman";
    s2.id=6778;
    s2.course ="bca" ;
    cout<<s2.name<<endl;
    cout<<s2.id<<endl;
    cout<<s2.course<<endl;



    return 0;
}*/
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    int id;
    string name;
    string course;
};
int main(){
    student s;
    s.id;
    s.name;
    s.course;
    cin>>s.id;
    return 0;
}