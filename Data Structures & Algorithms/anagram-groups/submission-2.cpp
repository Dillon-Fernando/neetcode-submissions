class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> data;

        for (string str : strs)
        {
            string temp = str;
            sort(str.begin(), str.end());
            data[str].push_back(temp);
        }

        vector<vector<string>> returnData;
        for (auto& [_, strings] : data)
        {
            returnData.push_back(move(strings));
        }
        return returnData;
    }
};
