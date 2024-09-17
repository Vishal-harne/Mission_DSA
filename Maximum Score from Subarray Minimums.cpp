Maximum Score from Subarray Minimums

class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int lsum=INT_MIN;
        int csum=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            csum=arr[i]+arr[i+1];
            if(csum>lsum){
                lsum=csum;
            }
            csum=0;
        }
        return lsum;
    }
};
