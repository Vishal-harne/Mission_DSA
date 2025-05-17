class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &ans) {
        int n=ans.size();
       set<vector<int>>set;
       for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n-1;j++){
               for(int k=j+1;k<n;k++){
                   if(ans[i]+ans[j]+ans[k]==0){
                       set.insert({i,j,k});
                   }
               }
           }
       }
          
      vector<vector<int>>ans1(set.begin(),set.end());
      return ans1;
    }
};
