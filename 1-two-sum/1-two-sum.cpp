class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int len = nums.size();
        vector<int> ans;
        
        while (i < len - 1)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return (ans);
                }
            }
            i += 1;
        }
        return (ans);
    }
};