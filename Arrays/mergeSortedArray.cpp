#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

            nums1.erase(nums1.begin()+m, nums1.end());
            nums2.erase(nums2.begin()+n, nums2.end());
            
            nums1.insert(nums1.end(), nums2.begin(), nums2.end());
            sort(nums1.begin(), nums1.end());

            cout<<"The sorted array is ";
            for(int &i : nums1) {cout<<i<<" ";}
        }
};

int main() {
    vector<int> nums1 = {-1, 0, 0, 3, 3, 3, 0, 0, 0};
    int m = 6;

    vector<int> nums2 = {1, 2, 2};
    int n = 3;
    
    Solution sol;
    sol.merge(nums1, m, nums2, n);

    return 0;
}