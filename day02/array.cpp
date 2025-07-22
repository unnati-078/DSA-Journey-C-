#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    // Ask the user how many elements they want to store
    cout << "Enter number of elements: ";
    cin >> n;

    // Take input for each element of the array
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Show the original array
    cout << "Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // ---- INSERTION ----
    // Ask where to insert and what value to insert
    int pos, val;
    cout << "Enter position to insert (0-indexed) and value: ";
    cin >> pos >> val;

    // Move elements to the right to make space at 'pos'
    for(int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    // Insert the value at the given position
    arr[pos] = val;
    n++; // Array size increases by 1

    // ---- DELETION ----
    // Ask which position to delete
    cout << "Enter position to delete: ";
    cin >> pos;

    // Shift elements to the left to remove the element at 'pos'
    for(int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--; // Array size decreases by 1

    // ---- SEARCH ----
    int key, found = 0;
    cout << "Enter value to search: ";
    cin >> key;

    // Go through the array to find the key
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found at index " << i << endl;
            found = 1;
            break;
        }
    }

    // If the value wasn't found
    if(!found)
        cout << "Not found\n";

    // ---- UPDATE ----
    // Ask where to update and what the new value is
    cout << "Enter position to update and new value: ";
    cin >> pos >> val;

    // Update the value at the given position
    arr[pos] = val;

    // ---- FINAL OUTPUT ----
    // Show the final state of the array
    cout << "Final Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
