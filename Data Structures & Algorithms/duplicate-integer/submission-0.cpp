#include <vector>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::vector<int> foundNums;
        for (const int num : nums) {
            auto it = std::find(foundNums.begin(), foundNums.end(), num);
            if (it != foundNums.end()) {
                return true;
            }
            foundNums.push_back(num);
        }
        return false;
    }
};