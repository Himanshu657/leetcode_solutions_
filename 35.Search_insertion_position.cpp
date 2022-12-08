//tc = log n
class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        
        int i=0;
        int j=arr.size()-1;
        int mid=(i+j)/2;
        int n=0;
       
        while(i<=j)
        {
            if(arr[mid]==target)
            {
                
                return mid;
               

            }
            else if(target>arr[mid])
            {
                i=mid+1;
                mid=(i+j)/2;
            }
            else
            {
                j=mid-1;
                mid=(i+j)/2;
            }

        }
        return i;
        
    }
};
