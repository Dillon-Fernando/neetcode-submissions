#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> foundNums;
        for (const int num : nums) {
            if (!foundNums.insert(num).second) {
                return true;
            }
        }
        return false;
    }
};