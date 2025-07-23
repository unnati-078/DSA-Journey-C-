#include <iostream>
#include <vector>
using namespace std;

int main() {
    //creating a vector 'vec' of size 3, initialized with all elements as 0
    vector<int> vec(3, 0); //vec=[0,0,0]

    //printing the first element using index
    cout << vec[0]; //output: 0

    //using range-based for loop to print all elements of the vector
    for (int i : vec) {
        cout << i << endl; //output: 0 0 0
    }

    //creating a character vector with a single character 'a'
    vector<char> c = {'a'};
    cout << c[0] << endl; //output: a

    //demonstrating some common vector functions

    //.size() returns the number of elements in the vector
    cout << "size of vec: " << vec.size() << endl; //output: 3

    //.push_back() adds elements to the end of the vector
    vector<int> a;
    a.push_back(25);
    a.push_back(45);
    cout << "a = " << a[0] << endl; //output: 25

    //.pop_back() removes the last element of the vector
    a.pop_back(); //now a=[25]

    //.front() returns the first element
    cout << a.front() << endl; //output: 25

    //.back() returns the last element
    cout << a.back() << endl; //output: 25

    return 0;
}
