#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> foundNums;
        for (const int num : nums) {
            auto it = std::find(foundNums.begin(), foundNums.end(), num);
            if (it != foundNums.end()) {
                return true;
            }
            foundNums.insert(num);
        }
        return false;
    }
};