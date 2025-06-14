#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;

        // Walk up
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }

        // Peak can't be first or last
        if (i == 0 || i == n - 1) {
            return false;
        }

        // Walk down
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }

        return i == n - 1;
    }
};

int main() {
    vector<int> arr = {4, 4, 3, 2, 1};

    Solution sol;
    cout<<sol.validMountainArray(arr);

    return 0;
}