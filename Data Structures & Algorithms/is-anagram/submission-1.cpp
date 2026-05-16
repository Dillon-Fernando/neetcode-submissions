#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> data_s;
        std::unordered_map<char, int> data_t;
        for (char c : s)
        {
            data_s[c] += 1;
        }

        for (char c : t)
        {
            data_t[c] += 1;
        }

        for (const auto& [char_, count] : data_s)
        {
            if (data_t[char_] != count)
            {
                return false;
            }
        }
        for (const auto& [char_, count] : data_t)
        {
            if (data_s[char_] != count)
            {
                return false;
            }
        }
        return true;
    }
};
