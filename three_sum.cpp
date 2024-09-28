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
               vector<int>vec;
               vec.push_back(num);
               vec.push_back(nums[j]);
               vec.push_back(nums[k]);
               while(j<k && nums[j]==nums[j+1])j++;
               while(j<k && nums[k]==nums[k--])k--;
               j++;
               k--;
               s.push_back(vec);
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
