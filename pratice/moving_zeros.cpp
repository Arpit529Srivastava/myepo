#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// two pointer approach..
vector<int> move(int n, vector<int> arr) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    if (j == -1) {
        return arr;
    }
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Input values into the vector
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the move function and store the result
    vector<int> result = move(n, arr);

    // Output the elements of the result vector
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
