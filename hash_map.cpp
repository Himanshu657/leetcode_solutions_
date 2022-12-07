class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> arr;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                arr.push_back(i);
                arr.push_back(m[target-nums[i]]);
                return arr;
            }
            m[nums[i]]=i;
        }
        return arr;
    }};