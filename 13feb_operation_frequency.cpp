class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int count=1;
        vector<int>presum;
          int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            presum.push_back(sum);
        }
        for(int i=0;i<n;i++){
            cout<<presum[i]<<" ";
        }
        //till here just store prefix sum


         for(int i=n-1;i>0;i--){
            //first check there is any repeated element if there calculate 
            while(nums[i]==nums[i-1]){
                count++;
                i--;
            }
            //if it possible to convert all previous element into the current element do that
            if(presum[i-1]+k>=nums[i]*i){
                    count+=i ;
                    break;
                }
            
            else{
                maxi=max(maxi,count);
                count=1;
            }
            
        }  
        return count;  
    }
    
};

