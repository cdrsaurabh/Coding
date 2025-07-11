#include<iostream>
#include<string>
using namespace std;
class student{
    private:  
    int id;
    public:
    string name;
    string course;
    void getId(int i){
        id=i;
    }
    int giveId(){
        return id;
    }
};
int main(){
    student s;
    s.name="saurabh";
    s.getId(28682);
    s.course="bscit";
    cout<<s.name<<s.course<<s.giveId()<<endl;
    // s.id=987;
    // cout<<s.id<<endl;
    return 0;
}