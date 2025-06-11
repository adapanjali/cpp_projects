#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public: 
        vector<int> sortedSquares(vector<int>& nums) {
            // There are built-in functions for sorting vectors
            
            for(int& n : nums) {
                n*=n;
            }

            // Sort at the end so that negative numbers don't cause issues
            sort(nums.begin(), nums.end());

            return nums;
        }
};

int main() {
    vector<int> nums = {2, 3, 7, 6, 5};

    Solution sol;

    cout<<"The sorted squares are ";
    for (int i : sol.sortedSquares(nums)) {
        cout<<i<<" ";
    }
}