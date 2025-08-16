#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n, 1);

    // First pass: compute left products
    int leftProduct = 1;
    for (int i = 0; i < n; ++i) {
        answer[i] = leftProduct;
        leftProduct *= nums[i];
    }

    // Second pass: compute right products and multiply
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; --i) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return answer;
}

int main() {
    vector<int> sample = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(sample);

    // Print result
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

