class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1)
        {
            return nums[0];
            
        }
        else
        {
            
            for(int i=0;i<nums.size();i++)
            {
                ans=ans^nums[i];

            }
        }
        return ans;


        
    }
};
