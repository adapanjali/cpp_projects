#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers; // Empty vector

    cout << "Initial size: " << numbers.size() << endl; // Output: 0

    // Adding elements
    numbers.push_back(10);
    cout << "Size after adding 1 element: " << numbers.size() << endl; // Output: 1

    numbers.push_back(20);
    numbers.push_back(30);
    cout << "Size after adding 3 elements: " << numbers.size() << endl; // Output: 3

    // Removing an element
    numbers.pop_back(); // Removes last element
    cout << "Size after removing an element: " << numbers.size() << endl; // Output: 2

    return 0;
}