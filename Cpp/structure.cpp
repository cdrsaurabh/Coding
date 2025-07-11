#include<iostream>
#include<string>
using namespace std;
typedef struct student{
    string name;
    int id;
    string course;

}student;
int main(){
    student s;
    cout<<"Please enter your name"<<endl;
    cin>>s.name; //saurabh
    cout<<"Please enter your ID"<<endl;
    cin>>s.id; //28682
    cout<<"The name is "<<s.name<< endl; //The name is saurabh
    cout<<"The id is "<<s.id<<endl; //The id is 28

    return 0;
}