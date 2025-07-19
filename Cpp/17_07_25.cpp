#include<iostream>
#include<string>
//run-time polymorphism
using namespace std;
class base{
	protected:
	int a;
	public:
	virtual void in(){
		cout<<"Enter number a\n";
		cin>>a;
	}
	virtual void out(){
		cout<<"\na="<<a<<endl;
	}
};
class derive:public base{
	protected:
	int b;
	public:
	void in(){
		cout<<"Enter two number:\n";
		cin>>a>>b;
	}
	void out(){
		cout<<"\nsum ="<<a+b<<endl;
	}
};

int main(){
	base *ptr;
	base p;
	derive d;
	ptr = &p;
	ptr->in();
	ptr->out();
	ptr = &d;
	ptr->in();
	ptr->out();
	
	
	
	return 0;
}