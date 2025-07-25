#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    /* for printing subarrays
    for (int i=0; i<n; i++) {
        for (int j=i;j<n;j++) {
            for (int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    */
    
    /*brute force appraoch
    int maxSum=INT_MIN;
    for (int i=0; i<n; i++) {
        int currSum=0;
        for (int j=i;j<n;j++) {
            currSum += arr[j];
            maxSum=max(currSum, maxSum);
        }
    }
    cout<<maxSum;
    */

    int currSum = 0, maxSum = vec[0];
    for (int val : vec) {
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum<0) {
            currSum=0;
        }
    }
    cout<<maxSum;

    return 0;
}