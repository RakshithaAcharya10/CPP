#include<iostream>
using namespace std;
int main(){
    int a, b, temp;
    cout<<"Enter the value for A : ";
    cin>>a;
    cout<<"\nEnter the value for B : ";
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"\nAfter swaping";
    cout<<"\nValue of A :"<<a;
    cout<<"\nValue of B :"<<b;
}