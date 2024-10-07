class Solution {
public:
    bool checkmid(int mid,int n,vector<int>& nums,int k){
        int cntsubarray=0;
        int csum=0;
        for(int i=0;i<n;i++){
            if(nums[i]>mid){
                return false;
            }
            csum+=nums[i];
            if(csum>mid){
                cntsubarray++;
                csum=nums[i];
                if(cntsubarray>=k){
                   return false;
                }
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
         int n=nums.size();
        if(k>n)return -1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int i=1;
        int j=sum;
        int result=sum;
        if(k==1 || n==1){
            return sum;
        }
        while(i<=j){
            int mid=i+(j-i)/2;
            if(checkmid(mid,n,nums,k)==true){
                //  cout<<mid<<" me mid"<<endl;
               result=mid;
               j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return result;
    }
};
