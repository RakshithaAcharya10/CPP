#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    if (n1>n2) {
        cout<<n1<<" is the largest"<<endl;
    } else if (n2>n1) {
        cout<<n2<<" is the largest"<<endl;
    } else {
        cout<<"Both numbers are equal"<<endl;
    }
    return 0;
}
