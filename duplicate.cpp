#include <iostream>
#include <vector>
using namespace std;

vector<int> Merging(vector<int> &nums) {
    vector<int> ans;
    ans.resize(nums.size() * 2);

    for (int i = 0; i < nums.size(); ++i) {
        ans[i] = nums[i];
        ans[i + nums.size()] = nums[i];
    }

    return ans;
}

int main() {
    // Example usage
    vector<int> input = {1, 2, 3};
    vector<int> result = Merging(input);

    // Display the concatenated array
    cout << "Concatenated Array: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
