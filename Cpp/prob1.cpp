#include<iostream>
#include<string>
using namespace std;

int main() {
    int a;
    cout<<"Ent er something"<<endl;
    cin>>a;
    if (cin>>a) == 1
    cout<<"ok"<<endl;
    else{
        cout<<"not ok"<<endl;
    }

    return 0;
}