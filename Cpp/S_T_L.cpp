#include<bits/stdc++.h>
using namespace std;
void learnLists(){
// lists does not supports indexing
    list <int> ls; //{}
    ls.push_back(2);//{2}
    ls.push_back(4);
    ls.push_back(6);
    ls.emplace_back(8);
// method -1 of traversing a list
// <=,>= does not work with iterators
    cout<<"Printing a list with iterators"<<endl;
    for(auto it = ls.begin();it!=ls.end();it++) {
        cout<<*it<<endl;
    }
//  method - 2 of traversing a list
    cout<<"Printing a list with for-each loop"<<endl;
    for(auto x : ls){
        cout<<x<<endl;
    }
    cout<<ls.empty()<<endl; // used to check if a list is empty or not
    cout<<ls.size()<<endl;

    list <int> ls2 = {1,3,5,7,9};
    cout<<"Printing list ls2 with for-each loop"<<endl;
    for(auto x : ls2){
        cout<<x<<endl;
    }
    ls.swap(ls2);
    cout<<"After swapping list ls is: "<<endl;
    for(auto x : ls){
        cout<<x<<endl;
    }
}

void learnDeque(){
// deques are like lists in which indexing are allowed
    deque <int> dq;
// adding elements to a deque    
    dq.push_back(5);
    dq.emplace_back(6);
    dq.push_front(4); // inserts element in the beginning of the deque
    dq.push_back(7);
    cout<<dq[0]<<endl;
    cout<<dq[1]<<endl;
    
    cout<<dq.at(2)<<endl;
}

int main() {
    //learnLists();
    learnDeque();
    return 0;
}