class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        if(target<nums[0])return 0;
        if(target>nums[n-1])return n;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
               return mid;
            }
            else if(nums[mid]<target && nums[mid+1]>target  && mid+1<=n-1){
                   return mid+1;
            }
            else if(nums[mid]>target){
                  j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return 0;
    }
};
