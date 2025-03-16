// Running Sum of 1D Array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            for(int i=1; i<nums.size(); i++) {
                nums[i] += nums[i-1];
            }
    
            return nums;
        }
};

int main(){

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    Solution sol;
    vector<int> result = sol.runningSum(nums);

    for(int num : result) {              /* This is called a range-based loop used for iterating over elements of a container
        cout << num << " ";                 like a vector, array or set, without using indices */
    }
    cout << endl;

    return 0;
}