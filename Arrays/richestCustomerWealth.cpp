#include <iostream>
#include <vector>
#include <algorithm>  // For std::max

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (const auto& customer : accounts) {
            int wealth = 0;
            for (int bank : customer) {
                wealth += bank;
            }
            maxWealth = max(maxWealth, wealth);
        }

        return maxWealth;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}, {4, 1, 2}};
    cout << "Maximum Wealth: " << sol.maximumWealth(accounts) << endl;
    return 0;
}