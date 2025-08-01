#include<iostream>
#include<string>
using namespace std;
//Use of friend function
class student{
    int id;
    string name;
    public:
    student(){
        cout<<"this is a constructor"<<endl;
    }
    friend void showdetails(student *obj,int i, string n);
};
void showdetails(student *obj,int i, string n){
obj->id = i;
obj->name = n;
cout<<"Id is "<<obj->id<<endl;
cout<<"The name is "<<obj->name<<endl;

};
int main() {
    student s1;
    showdetails(&s1,1,"Saurabh");
    return 0;
}