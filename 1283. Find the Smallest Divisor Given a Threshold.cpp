class Solution {
public:
    int smallestDivisor(vector<int>& nums, int h) {
        int maxi=*max_element(nums.begin(),nums.end());
        int i=1;
        int j=maxi;
        while(i<j){
            int mid=i+(j-i)/2;
            int calthre=0;
            for(int k=0;k<nums.size();k++){
                calthre+=ceil((nums[k]+mid-1)/mid);
            }
            if(calthre>h){
                i=mid+1;
            }else{
                j=mid;
            }
        }
        return i;
    }
};
