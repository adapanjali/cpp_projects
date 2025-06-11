#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto end = remove(nums.begin(), nums.end(), val);
        nums.erase(end, nums.end());

        return nums.size();
    }
};

int main() {
    vector<int> nums = {3, 2, 3, 4, 2, 2, 3, 3, 0, 3, 7, 6, 8};
    int val = 3, k;

    Solution sol;
    k = sol.removeElement(nums, val);
    
    cout<<"The size of the array is "<<k<< ".\n";
    cout<<"The array is ";
    for (int i : nums) {cout<<i<<" ";}
    
    return 0; 
}