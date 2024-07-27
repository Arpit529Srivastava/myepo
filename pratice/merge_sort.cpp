#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the sorted values back to the original array
    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }
}

void merge_sort(vector<int>& arr, int low, int high) {
    if (low == high)
        return;

    int mid = (low + high) / 2;
    //recursive function is created...
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter the size of the array: "<<endl;
    cin >> n;

    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
