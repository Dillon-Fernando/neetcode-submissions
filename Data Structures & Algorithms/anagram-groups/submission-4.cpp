class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> data;

        for (string str : strs)
        {
            array<int, 26> keyData = {};
            for (char ch : str)
            {
                keyData[ch - 'a']++;
            }
            data[keyData].push_back(str);
        }

        vector<vector<string>> returnData;
        for (auto& [key, strings] : data)
        {
            returnData.push_back(strings);
        }
        return returnData;
    }
};
