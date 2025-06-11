#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
    public: 
        int removeDuplicates(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            auto lastUnique = unique(nums.begin(), nums.end());
            nums.erase(lastUnique, nums.end());

            return nums.size();
        }
};

int main() {
    vector<int> nums = {1, 3, 3, 4, 4, 3, 6, 3, 7, 3, 7, 7};
    
    Solution sol;
    sol.removeDuplicates(nums);

    cout<<"The array with duplicates removed is ";
    for(int i : nums) {cout<<i<<" ";}

    return 0;
}