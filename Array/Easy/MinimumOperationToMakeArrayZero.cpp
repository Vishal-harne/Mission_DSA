
class Solution {
  public:
    // Function to find minimum operations to make all elements equal.
    int minOps(vector<int> arr, int k) {
      int n=arr.size();
      vector<int>ans(n-1);
      sort(arr.begin(),arr.end());
      
      int sum=0;
      for(int i=0;i<n-1;i++){
          ans[i]=arr[n-1]-arr[i];
         if(ans[i]%k!=0){
             return -1;
         }
         sum+=(ans[i]/k);
      }
      return sum;
    }
};
