#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ctr = 0;
        int maxCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                ctr++;
                maxCount = max(maxCount, ctr);
            } else {
                ctr = 0;
            }
        }

        return maxCount;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1};
    Solution sol;  // Create an object of the class
    int result = sol.findMaxConsecutiveOnes(nums);  // Call the method

    cout << "Maximum consecutive 1s: " << result << endl;

    return 0;
}