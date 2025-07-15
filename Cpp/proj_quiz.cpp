#include<iostream>
#include<string>
using namespace std;

int main() {
    int ch,sum=0;
	char a;
	while(ch!=4){
	cout<<"\n\t===MCQ QUIZ===\n"<<endl;
    cout<<"Press q to exit the quiz anytime"<<endl;
    cout<<"1. C Lang\n"<<endl;
    cout<<"2. DBMS\n"<<endl;
    cout<<"Press 3 to exit\n"<<endl;
    cout<<"\nEnter Your Choice: "<<endl;
    cin>>ch;
    switch(ch){
    	case 1:
    		cout<<"\nEach Question carries 2 marks\n"<<endl;
			cout<<"\nQ1. Where was C lang created?"<<endl;
			cout<<"\na. Mountain lab\n"<<endl;
			cout<<"b. Bell lab\n"<<endl;
    		cout<<"c. Table lab\n"<<endl;
    		cout<<"d. Chair lab\n"<<endl;
    		cout<<"Answer:"<<endl;
    		cin>>a;
    		if(a=='b'||a=='B'){
    			cout<<"\nCorrect Answer."<<endl;
    			sum=sum+2;
			} else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='A')||(a=='a')||(a=='D')||(a=='c')||(a=='D')||(a=='d')){
				cout<<"\nWrong Answer"<<endl;
			}else {
				cout<<"\nInvalid Choice"<<endl;
			}
			cout<<"\nQ2. Who invneted C lang?"<<endl;
			cout<<"\na. Tim Berners\n"<<endl;
			cout<<"b. James Gosling\n"<<endl;
    		cout<<"c. Charles Bechman\n"<<endl;
    		cout<<"d. Dennis Ritchie\n"<<endl;
    		cout<<"Answer:"<<endl;
    		cin>>a;
    		if(a=='d'||a=='D'){
    			cout<<"\nCorrect Answer."<<endl;
    			sum=sum+2;
			}else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='A')||(a=='a')||(a=='b')||(a=='c')||(a=='B')||(a=='d')){
				cout<<"\nWrong Answer"<<endl;
			}else {
				cout<<"\nInvalid Choice"<<endl;
            }
			cout<<"\nQ3. What is the range of signed char?"<<endl;
			cout<<"\na. -128 to 127\n"<<endl;
			cout<<"b. 0 to 255\n"<<endl;
    		cout<<"c. 0 to 65535\n"<<endl;
    		cout<<"d. -32768 to 32767\n"<<endl;
    		cout<<"Answer:"<<endl;
    		cin>>a;
    		if(a=='A'||a=='a'){
    			cout<<"\nCorrect Answer.\n"<<endl;
    			sum=sum+2;
			}else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='B')||(a=='b')||(a=='D')||(a=='c')||(a=='D')||(a=='d')){
				cout<<"\nWrong Answer\n"<<endl;
			}else {
				cout<<"\nInvalid Choice\n"<<endl;
			}
			
			cout<<"\nQ4. Which of the following is a valid declaration in C?"<<endl; 
			cout<<"\na. int 2num;\n"<<endl;
			cout<<"b. float $rate;\n"<<endl;
    		cout<<"c. char _name;\n"<<endl;
    		cout<<"d. double char;\n"<<endl;
    		cout<<"Answer:"<<endl;
    		cin>>a;
    		if(a=='c'||a=='C'){ 
    			cout<<"Correct Answer.\n"<<endl;
    			sum=sum+2;
			}else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='A')||(a=='a')||(a=='D')||(a=='b')||(a=='B')||(a=='d')){
				cout<<"\nWrong Answer\n"<<endl;
			}else {
				cout<<"\nInvalid Choice\n"<<endl;
			}
			
			cout<<"\nQ5. Datatype of a variable cannot be declared twice."<<endl;
			cout<<"\na. True\n"<<endl;
			cout<<"b. False\n"<<endl;
    		cout<<"Answer:"<<endl;
    		cin>>a;
    		if(a=='a'||a=='A'){
    			cout<<"\nCorrect Answer.\n"<<endl;
    			sum=sum+2;
			}else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='b')||(a=='B')){
				cout<<"\nWrong Answer\n"<<endl;
			}else {
				cout<<"\nInvalid Choice\n"<<endl;
			}
			cout<<"\nYour score in C is: "<<sum;
			break;
			//FOR 2ND SUBJECT
	    case 2:
		    cout<<"\nQ1. In a relational database, what is a 'tuple'?"<<endl;
            cout<<"\nA. A row"<<endl;
            cout<<"\nB. A column"<<endl;
            cout<<"\nC. A table"<<endl;
            cout<<"\nD. A relationship"<<endl;
            cout<<"\nAnswer:"<<endl;
    		cin>>a;
            if(a=='a'||a=='A'){
    			cout<<"\nCorrect Answer.\n"<<endl;
    			sum=sum+2;
			}else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='b')||(a=='B')||(a=='D')||(a=='C')||(a=='c')||(a=='d')){
				cout<<"\nWrong Answer\n"<<endl;
			}else {
				cout<<"\nInvalid Choice\n"<<endl;
			}
            
            cout<<"\nQ2.Which key is used to uniquely identify a record in a table?"<<endl;
            cout<<"\nA. Foreign key"<<endl;
            cout<<"\nB. Super key"<<endl;
            cout<<"\nC. Candidate key"<<endl;
            cout<<"\nD. Primary key"<<endl;
            cout<<"\nAnswer:"<<endl;
    		cin>>a;
		    if(a=='d'||a=='D'){
    			cout<<"\nCorrect Answer.\n"<<endl;
    			sum=sum+2;
			}else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='b')||(a=='B')||(a=='c')||(a=='C')||(a=='a')||(a=='A')){
				cout<<"\nWrong Answer\n"<<endl;
			}else {
				cout<<"\nInvalid Choice\n"<<endl;
			}
            
            cout<<"\nQ3.What does the term Normalization mean in DBMS?"<<endl;
            cout<<"\nA. Compressing data to save space"<<endl;
            cout<<"\nB. Organizing data to reduce redundancy"<<endl;
            cout<<"\nC. Encrypting sensitive data"<<endl;
            cout<<"\nD. Backing up data regularly"<<endl;
            cout<<"\nAnswer:"<<endl;
    		cin>>a;
            if(a=='b'||a=='B'){
    			cout<<"\nCorrect Answer.\n"<<endl;
    			sum=sum+2;
			}else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='a')||(a=='A')||(a=='c')||(a=='C')||(a=='d')||(a=='D')){
				cout<<"\nWrong Answer\n"<<endl;
			}else {
				cout<<"\nInvalid Choice\n"<<endl;
			}
            
            cout<<"\n Q4.Which of the following is a DML command?"<<endl;
            cout<<"\nA. CREATE"<<endl;
            cout<<"\nB. DROP"<<endl;
            cout<<"\nC. SELECT"<<endl;
            cout<<"\nD. ALTER"<<endl;
            cout<<"\nAnswer:"<<endl;
    		cin>>a;
            if(a=='c'||a=='C'){
    			cout<<"\nCorrect Answer.\n"<<endl;
    			sum=sum+2;
			}else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='b')||(a=='B')||(a=='d')||(a=='D')||(a=='a')||(a=='A')){
				cout<<"\nWrong Answer\n"<<endl;
			}else {
				cout<<"\nInvalid Choice\n"<<endl;
			}
            
            cout<<"\n Q5.Which of the following is true about the PRIMARY KEY constraint?"<<endl;
            cout<<"\nA. It allows duplicate values"<<endl;
            cout<<"\nB. It can have NULL values"<<endl;
            cout<<"\nC. A table can have multiple primary keys"<<endl;
            cout<<"\nD. It uniquely identifies each record in a table"<<endl;
            cout<<"\nAnswer:"<<endl;
    		cin>>a;
	        if(a=='d'||a=='D'){
    			cout<<"\nCorrect Answer.\n"<<endl;
    			sum=sum+2;
			}else if((a=='q')||(a=='Q')){
                break;
            } else if ((a=='b')||(a=='B')||(a=='c')||(a=='C')||(a=='a')||(a=='A')){
				cout<<"\nWrong Answer\n"<<endl;
			}else {
				cout<<"\nInvalid Choice\n"<<endl;
			}
            cout<<"\nYour score in DBMS is: "<<sum;
            break;
            case 3:
            cout<<"You've quitted the Quiz......"<<endl;
            break;
			
        
            
            
		}
	} 

    return 0;
}