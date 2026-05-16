class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        std::unordered_map<int, int> data;
        std::vector<int> return_v;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (data.contains(nums[i]))
            {
                return_v = {data[nums[i]], i};
                return return_v;
            }
            data[target - nums[i]] = i;
        }
        return_v = {-1};
        return return_v;
    }
};
