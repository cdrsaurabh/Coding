#include<iostream>
#include<string>
using namespace std;
// Banking System
class bank{
    
    public:
    string name;
    int acc;
    int amnt=0;
    void cred_amnt(int a){
        this->amnt+=a;
    }
    void deb_amnt(int b){
        this->amnt-=b;
    }
};

int main() {
    bank user1;
    cout<<"Enter your name"<<endl;
    cin>>user1.name;
    cout<<"Enter your account number:"<<endl;
    cin>>user1.acc;
    cout<<"Your current balance is:"<<user1.amnt<<endl;
    while(1){
    cout<<"Press 1 for credit"<<endl;
    cout<<"Press 2 for debit"<<endl;
    int input;
    cin>>input;
    if (input == 1){
        int a;
        cout<<"Enter the amount you want to credit"<<endl;
        cin>>a;
        user1.cred_amnt(a);
        cout<<"Now your balance is "<<user1.amnt<<endl;
    }
    else if (input == 2){
        int b;
        cout<<"Enter the amount you want to debit"<<endl;
        cin>>b;
        user1.deb_amnt(b);
        cout<<"Now your balance is "<<user1.amnt<<endl;
    }
    else{
        break;
    }
    }
    return 0;
}