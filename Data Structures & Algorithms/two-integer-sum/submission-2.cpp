class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        std::unordered_map<int, int> data;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (data.contains(nums[i]))
            {
                return {data[nums[i]], i};
            }
            data[target - nums[i]] = i;
        }
        return {-1};
    }
};
