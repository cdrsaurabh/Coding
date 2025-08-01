#include<iostream>
#include<string>
#include<cmath>
using namespace std;


void str_Reverse(){
string name;
cout<<"\nEnter your name "<<endl;
getline(cin,name);
//name = "tpgtahc naht retteb si keespeed";
int len = name.length();
cout<<"\nThe number of letters in your name is  "<<len<<endl;
string ulta = "";
int i;
for(i=len-1;i>=0;i--){
ulta+=name[i];
}
cout<<ulta<<endl;
}



void checkKeys(){
int i;
char alpha[28] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char Alpha[28] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char num[12] = {'1','2','3','4','5','6','7','8','9','0'};
char input;
cout<<"Enter a letter"<<endl;
cin>>input;
for(i=0;i<=28;i++){
if(input == alpha[i]){
cout<<input<<" is part of small alphabet"<<endl;
}
if(input == Alpha[i]){
cout<<input<<" is part of Capital alphabet"<<endl;
}
}
for(i=0;i<12;i++){
if(input == num[i]){
cout<<input<<" is a part of Number"<<endl;
}
}
}/*
int main(){
//int a = 32768;
//cout<<a<<endl;
//cout<<"hello"<<endl;
//float c =9.9;
//double d = 10.5;
//cout<<sizeof(a)<<endl;
//cout<<sizeof(d)<<endl;
int A;float B;
A=5;B=2;
//cout<<"\n"<<A/B<<endl;
for(int i=0;i<=5;i++){
for(int j=0;j<=5;j++){
//cout<<"*";
}
//cout<<"\n"<<endl;
}
int a=1;
for(int j=0;j<3;j++){
//cout<<a;
}
//cout<<"\n";
cout<<sizeof(int)<<endl;
cout<<sizeof(long int)<<endl;
cout<<sizeof(short int)<<endl;
cout<<sizeof(long long int)<<endl;
cout<<sizeof(unsigned int)<<endl;
unsigned int h = -10;
cout<<h<<endl;
return 0;
}
*/

void swap(){
//prgram to swap using pointers
int a = 5;
int b = 10;
int *p, *q;
p = &a; //p = 5;
q = &b; //q = 10
cout<<"p= "<<*p<<endl;
cout<<"q= "<<*q<<endl;
int temp;
temp = *p;
*p = *q;
*q = temp;
cout<<"p= "<<*p<<endl;
cout<<"q= "<<*q<<endl;
}


void max(int *a, int *b){
int p,q;
p = *a;
q = *b;
if (p>q){
cout<<"\nMax is "<<p<<endl;
}else {
cout<<"Max is "<<q<<endl;
}
}
void random1(){
//int x =5;
//int y =1;
//max(&x,&y);
int a[5] = {1,2,3,4,5};
int *p = a;
int i;
for(i=0;i<5;i++){
cout<<*(p+i)<<endl;
}
}
void reverse_arr(){
int a[5]={1,2,3,4,5};
int *ptr = a;
int naya[5];
int i;
cout<<"Before reverse"<<endl;
for(i=0;i<5;i++){
cout<<a[i]<<endl;
}
for(int i=0;i<5;i++){
naya[i] = *(ptr+i);
}
for(i=0;i<5;i++){
a[i]=naya[4-i];
}
cout<<"After reverse"<<endl;
for(i=0;i<5;i++){
cout<<a[i]<<endl;
}
}

void newReverseArray(){
//this fn is used to reverse the elements of the
//array using pointer.
int size;
cout<<"Enter the no. of elements in array "<<endl;
cin>>size;
int a[size];
int i;
for(i=0;i<size;i++){
cout<<"Element "<<i+1<<" of the array is ";
cin>>a[i];
}
int temp;
int *ptr = a;
for(i=0;i<(size/2);i++){
temp = *(ptr+i);
*(ptr+i) = a[size-1-i];
a[size-1-i] = temp;
}
for(i=0;i<size;i++){
cout<<a[i]<<endl;
}
}
void printArray(int *arr,int size){
//This fn. is used to print elements of the 
//array using a pointer.
int i;
for(i=0;i<size;i++){
cout<<*(arr+i)<<endl;
}
}
int sumArray(int *arr, int size){
//it's used to return sum of the elements of
//the given array
int i,sum = 0;
for(i=0;i<size;i++){
sum += arr[i];
}
return sum;
}
void questionNine(){
int num = 10;
int *ptr1 = &num;
int **ptr2 = &ptr1;
cout<<**ptr2<<endl;

}

void questionTen(int **a){
cout<<"Enter a number  ";
int num;
cin>>num;
**a = num;
cout<<"The new value is "<<**a<<endl;
}
int main(){
//newReverseArray();
//int arr[5] = {1,2,3,4,5};
//printArray(arr,5);

//cout<<"The sum of the array is "<<sumArray(arr,5);

//questionNine();
cout<<"Enter a number  ";
int num;
cin>>num;
cout<<"\nPrevious num value is "<<num<<endl;
int *ptr = &num;
int **ptr2 = &ptr;
questionTen(ptr2);
return 0;
}