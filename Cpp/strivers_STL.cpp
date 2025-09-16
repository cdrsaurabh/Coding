#include<bits/stdc++.h>
using namespace std;
// STL --> STANDARD TEMPLATE LIBRARY
// 1. Pairs
void learnPairs() {
//The concept is pair
//declaration syntaxes of pair :
//1.
    pair <int,int> p = {4,5};
    cout<<p.first<<endl;
//2.
    pair <int,int> q;
    q.first = 10;
    q.second = 20;
    cout<<q.first<<endl;
//3.
    pair<int,string> p1(1,"saurabh");
    cout<<p1.second<<endl;

//4.
    pair<int,string> p2 = make_pair(2,"pair");
    cout<<p2.second<<endl;

//arrays of pair
    pair<int,string> p3[2] =  { {1,"name"},{2,"nothing"}};
    cout<<p3[1].first<<endl;

//nesting of pair
    pair<int,pair<int,int>> p5 = {1,{2,2}};
    cout<<p5.second.second<<endl;
    cout<<p5.second.first<<endl;
}
void printVector(vector<int> &v) {
    for(auto x : v) cout << x << " ";
    cout << endl;
}
// 2. Iterators
void learnIterators() {
//Iterators --> used to iterate through elements of data structures

// declaration of an iterators
// lets say we have an vector
    vector <int> vec = { 1,2,3,4,5};

// syntex for iiterating
    vector <int>::iterator it;
    for ( it = vec.begin(); it!= vec.end(); it++) {

        cout<<*it<<endl; // here I've to use * for printing elements
    }

// method 2 of for-each loop
// this method is used to modify the vector during the looping
// .begin(), .end(), .erase() are the functions of vectors used
// with iterators to perform something while being in the loop

// .end() --> this function points to the memory location which is just
// after the last element of the vector

//Note: Use dereferencing operator (*) to access elements
    vector <int> vec2 = {3,6,9,12,15};
    auto it1 = vec2.end()-1;
    cout<<"Using end() ";
    cout<<*it1;
    for(auto it = vec2.begin(); it!=vec2.end();) {
        if(*it == 12) it = vec2.erase(it);
        else {
            it++;
        }
    }

//another method of printing elements of vector
    cout<<"\nElements of vec2 are :"<<endl;
    for ( const int& var : vec2) {
        cout<<var<<endl; // here i don't have to use * for printing elements why??
    }

//To iterate in reverse order, we can use rbegin() and rend()
//instead of begin() and end():
    cout<<"Printing the elements using reverse loop concept"<<endl;
    for (auto it = vec2.rbegin(); it != vec2.rend(); ++it) {
        cout << *it << "\n";
    }

}
// 3. Vectors
void learnVectors() {
//The concept is vector
//vector are the dynamic version of arrays

//Declaration of vector
    vector <int> v1 = {1,2,3,4,5};
//doubt : can i declare elements after declaring vector? like arrays me hota tha?
//ans->use .push_back() for doing so

// declaration 2
    vector <int> v2(3,100); // vector <int> v2 = {100,100,,100};
//doubt: can i declare different elements at once like this?

//functions of vector
//1 .front() --> for accessing the first element
    cout<<"First element is "<<v1.front()<<endl;

//2 .back() --> for accessing the last element
    cout<<"Last element is "<<v1.back()<<endl;

//3 .at() --> for accessing the element at specified index
    cout<<v1.at(3)<<endl;
    cout<<v1[3]<<endl;

//4 .push_back() --> used to add an element at the last of the vector
    v1.push_back(7);
    cout<<"Using push_back "<<endl;
    cout<<v1.at(5)<<endl;

//5 .emplace_beck() --> used to add an element at the last of the vector
    v1.emplace_back(9);
    cout<<"Using emplace_back ";
    cout<<v1.at(6)<<endl;

//6 pop_back() --> used to remove an element from the last of the vector
    v1.pop_back();
    cout<<"After deleting ";
    cout<<"Last element is "<<v1.back()<<endl;

//7 .size() --> used to print the no. of elements in a vector
    cout<<"size of the vector is "<<v1.size()<<endl;

//8 .empty() --> used to check whether a vector is empty or not
// return 1 if empty and return 0 if not.
    cout<<v1.empty()<<endl;

//9 .erase() --> used to remove an element at specific address
// rule : .erase(location)
// allways use .beigin() and .end() to use .erase() function
    cout<<"Erase function experiments: "<<endl;
    vector <int> v9 = {2,4,6,8,10};
    v9.erase(v9.begin()+2);
    for(int i=0; i<v9.size(); i++) {
        cout<<v9.at(i)<<endl;
    }
// to delete contiguous elements using erase()
    vector <int> v5 = { 10,20,30,40,50,60};
// delete 20,30,40
    v5.erase(v5.begin()+1,v5.begin()+4);
    cout<<"updated elements of vec5 are :\n";
    for (int i=0; i<v5.size(); i++) {
        cout<<v5.at(i)<<endl;
    }

//10 .insert() --> used to append elements at specific element address of vector
    vector <int> v6(2,10); // v10 = {10,10}
    v6.insert(v6.begin()+2,20); // adds simgle element ->20 at index 2
    v6.insert(v6.begin()+3,2,30); // adds 30,30 at index 3,4
    vector <int> v7(1,40);
    v6.insert(v6.begin()+5,v7.begin(),v7.end());// added elements of one vector to another
//doubt: how do i print this vector to check the changes??
    cout<<"New vec6 is ";
    printVector(v6);
    vector <int> vec8(2,30);
    vector <int> vec10(2,40);
    vec8.swap(vec10);
// doubt: how do i print the elements to check whether it's swapped or not?
    cout<<"New vec12 is ";
    printVector(vec8);

// looping through a vector
    int i;
    for(i=0; i<v1.size(); i++) {
        cout<<"\nAt Index "<<i<< " the element is "<<v1.at(i)<<endl;
    }

// different way of looping through a vector
    for(auto j : v1) {
        cout<<j<<endl;
    }
// experiments in swapping vectors
vector <int> x = {2,4,6};
vector <int> y = {1,3,5,7,9};
cout<<"x's element are: "<<endl;
printVector(x);
cout<<"y's element are: "<<endl;
printVector(y);
x.swap(y);
cout<<"x's element are: "<<endl;
printVector(x);
cout<<"y's element are: "<<endl;
printVector(y);

}

// doubt : what's range based for-loop? how it's used, concept, logic, usage??
// what's for-each loop? how it's different,concept,logic,usage??
int main() {
    //learnIterators();
    learnVectors();
    return 0;
}