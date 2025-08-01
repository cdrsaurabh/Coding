#include<iostream>
#include<string>
using namespace std;

int main() {
    cout<<"Enter the no. of terms in the Ap :";
    int terms;
    cin>>terms;
    int t[terms]; //t[4]
    int i, j, k;

    //Term input by user
    for (i=0; i<terms; i++) {
        cout<<"Enter the term "<<i<<": ";
        cin>>t[i];
    }
    int n = terms + 1;
    cout<<"n ="<<n<<endl;
    int d = t[1]-t[0];
    cout<<"The common difference is: "<<d<<endl;
    int a[n];
    a[0] = t[0];
    for(j=1;j<=terms;j++){
       a[j] = a[0] + (j*d);
    }
    for(j=1;j<=terms+1;j++){
        cout<<"Term "<<j<<"of the actual AP is "<<a[j-1]<<endl;
    }
    for(k=0;k<=terms;k++){
        if((a[k]!=t[k])==1){
            cout<<"your missing no. is "<<a[k]<<endl;
            break;
        }
    }
    cout<<"bye..!"<<endl;

    return 0;
}