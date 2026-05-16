#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }
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

        return data_t == data_s;
    }
};
