#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = 7;

    int i = 0, j = n - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    // print reversed array
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
