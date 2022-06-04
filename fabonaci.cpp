#include<iostream>
using namespace std;
main() {
    int t1 = 0, t2 = 1, next = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    next = t1 + t2;

    while(next <= n) {
        cout << next << ", ";
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    return 0;
}
