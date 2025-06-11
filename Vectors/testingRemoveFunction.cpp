#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums = {1, 0, 2, 0, 3, 0, 4};

    // Apply remove, but do NOT erase
    auto newEnd = remove(nums.begin(), nums.end(), 0); // remove returns the last good index after removing the zeros 

    // Print entire vector
    cout << "After remove (full vector): ";
    for (int i : nums) {
        cout << i << " ";
    }
    cout << endl;

    // Print only valid elements (up to newEnd)
    cout << "Valid elements only: ";
    for (auto it = nums.begin(); it < newEnd; ++it) { // newEnd is where the good elements end. They all get pushed to the beginning of the vector
        cout << *it << " ";
    }
    cout << endl;

    cout << "Logical end at index: " << distance(nums.begin(), newEnd) << endl;

    return 0;
}
