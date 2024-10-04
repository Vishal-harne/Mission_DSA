class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int sum=0;
        int maxi=0;
        for(int k=0;k<nums.size();k++){
            sum+=nums[k];
            maxi=max(maxi,nums[k]);
        }
        int i=maxi;
        int j=sum;
        while(i<j){
           
             int mid=i+(j-i)/2;
            int csum=0;
             int day=1;
            for(int p=0;p<nums.size();p++){
                 csum+=nums[p];
                if(csum>mid){
                   day++;
                  csum=nums[p];
                }
                    
            }   
            
            if(day>days){
                i=mid+1;
            }else{
                j=mid;
            }
        }
        return i;
    }
};
