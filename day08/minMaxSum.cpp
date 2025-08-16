#include <iostream>
#include <vector>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long long totalSum = 0;
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int num : arr) {
        totalSum += num;          // sum of all elements
        minVal = min(minVal, num); // track smallest
        maxVal = max(maxVal, num); // track largest
    }

    long long minSum = totalSum - maxVal; // exclude largest
    long long maxSum = totalSum - minVal; // exclude smallest

    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    miniMaxSum(arr);  // Output: 16 24
}
g