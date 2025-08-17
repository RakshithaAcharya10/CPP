#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nxtTerm;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        nxtTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
