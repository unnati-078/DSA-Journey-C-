#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    int value = grade; // Implicit type casting from char to int
    cout << "The ASCII value of grade '" << grade << "' is: " << value;
    return 0;
}