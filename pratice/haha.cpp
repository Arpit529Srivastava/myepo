#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (c % 3 != 0 && b != 0) {
            cout << -1 << endl;
        } else {
            int tents = a / 3 + b / 3 + c+2;
            if (c% 3 == 1) tents++;
            cout << tents << endl;
        }
    }
    return 0;
}