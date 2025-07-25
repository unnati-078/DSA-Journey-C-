#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=5; 
    int arr[n]={1,2,3,4,5};
    

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

    return 0;
}