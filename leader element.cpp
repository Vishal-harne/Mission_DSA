class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int>ans;
        int large=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=large){
                ans.push_back(arr[i]);
                large=arr[i];
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
