#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // int num0 = count_if(arr.begin(), arr.end(), [](int x){return x == 0;});
        // or the easier way is 
        int num0 = count(arr.begin(), arr.end(), 0);

        if (num0 > 1) {
            return 1;
        }

        else {

        for (int i: arr) {
            for (int j: arr) {
                if(j == i*2 && j != i) { return 1; break;} // Check for end case i = 0, it should not equal itself         
            }
        }; }

        return 0; 
    };
};

int main() {
    vector<int> arr = {0, -2, 2};
    Solution sol; 
    cout<<sol.checkIfExist(arr);
};