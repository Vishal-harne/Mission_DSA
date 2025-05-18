class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
       int sum=0;
       int maxi=INT_MIN;
       int secondmaxi=maxi;
       for(int i=0;i<arr.size();i++){
           sum+=arr[i];
           if(sum!=0  || arr[i]==0){
               secondmaxi=max(secondmaxi,sum);
           }
           if(sum<0){
               sum=0;
           }
           maxi=max(maxi,sum);
       }
        if(maxi==0){
            return secondmaxi;
        }
        else{
            return maxi;
        }
    }
};
