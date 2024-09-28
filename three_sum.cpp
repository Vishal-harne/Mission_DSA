class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>s;
        int n=nums.size();
        sort(nums.begin(),nums.end());
         for(int i=0;i<n;i++)
         {
           if(i>0 && nums[i]==nums[i-1])continue;//skip if it is same as previus element
           int num=nums[i];
           int j=i+1;
           int k=n-1;
           while(j<k){

            if(nums[j]+nums[k]==-num){
             s.push_back({num,nums[j],nums[k]});
               while(j<k && nums[j]==nums[j+1])j++;
               while(j<k && nums[k]==nums[k-1])k--;
               j++;
               k--;    
            }
            else if(nums[j]+nums[k]<(-num)){
                    j++;
            }else{
                k--;
            }
           }
         }

         return s;
    }
};
