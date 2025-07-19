#include<iostream>
#include<string>
using namespace std;
/* 2 types of poly
1. compile time --> eg. function,constructor,opearator overloading
2. run time --> eg. function overriding, virtual function
*/
/*fn overriding means parent nd child both hv same fn with diff
implementations.*/
// Function Overriding
class parent{
    public:
    void getinfo(){
        cout<<"Parent clas"<<endl;
    }
    virtual void hello(){
        cout<<"hello from parent"<<endl;
    }
};
class child: public parent{
        public:
        void getinfo(){
            cout<<"Child class"<<endl;
        }
        void hello(){
        cout<<"hello from child"<<endl;
    }
    };
int main() {
    child c1;
    c1.getinfo();
    c1.hello();
    return 0;
}