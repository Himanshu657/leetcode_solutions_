class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
       vector<int> arr,numss;
       numss=nums;
       sort(numss.begin(),numss.end());
       int i=0;
       int j=numss.size()-1;
       int n1,n2;
       while(i<j)
       {
           if(numss[i]+numss[j]==target)
           {
               n1=numss[i];
               n2=numss[j];
             
            
               break;
           }
           else if(numss[i]+numss[j]>target)
           {
               j--;
           }
           else if(numss[i]+numss[j]<target)
           {
               i++;
           }

    }
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==n1)
        {
            arr.push_back(i);

        }
        else if(nums[i]==n2)
        {
            arr.push_back(i);
        }
    }
    return arr;
    }};
