class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int mini=123456;
        int maxi=-1;
        int ind=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]<mini){
                mini=nums[i];
                maxi=mini;
                ind=i;
            }
            if(nums[i]>maxi  && i>ind){
                maxi=nums[i];
            }
            ans=max(ans,maxi-mini);
        }
        return ans;
    }
};
