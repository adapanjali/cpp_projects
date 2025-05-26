class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ctr=0;
        int maxCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                ctr++;
                maxCount = max(maxCount, ctr);
            } else if (nums[i] == 0){
                ctr = 0;
            }
        }

        return maxCount;
    }
};