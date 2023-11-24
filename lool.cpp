#include<iostream>
using namespace std;

int main() {
    cout << "n: ";
    int n;
    cin >> n;
    int b = n / 2 + 1;

    // First half
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "x";
        }
        cout << endl;
    }

    // Second half
    for (int i = b + 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "x";
        }
        cout << endl; // Add this line to move to the next line
    }

    return 0;
}

