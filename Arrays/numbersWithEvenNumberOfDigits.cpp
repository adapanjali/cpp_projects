#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        // Create a container to hold the number of digits in each of the numbers in the vector 
        vector<int> result;

        for(int& num : nums) {
            int ctr=0;
            int temp=num;

            while(temp>0) { 
                ctr++;
                temp/=10;
            }

            if(ctr%2==0){result.push_back(num);}
        }

        return result.size();
    }
};

int main(){
    vector<int> nums = {2345, 6, 77, 888888, 88, 97965345};
    
    Solution sol;
    cout<<"There are "<<sol.findNumbers(nums)<<" numbers with an even number of digits.";
    
}