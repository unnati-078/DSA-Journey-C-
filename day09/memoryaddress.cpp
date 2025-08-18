#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << &a << endl;
    int *ptr = &a;
    cout << ptr << endl;

    // pointer to pointer
    cout << "\n";
    int **ptr2 = &ptr;
    cout << ptr2 << endl;

    return 0;
}
