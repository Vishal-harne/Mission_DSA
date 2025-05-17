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


//optimisedapproch
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &ans) {
        int n=ans.size();
       unordered_map<int,vector<int>>map;
       vector<vector<int>>ans1;
       for(int j=0;j<n-1;j++){
           for(int k=j+1;k<n;k++){
               int val=-1*(ans[j]+ans[k]);
               if(map.find(val)!=map.end()){
                   for (auto i: map[val]) {
                    ans1.push_back({i, j, k});
                }
               }
           }
           map[ans[j]].push_back(j);
       }
       return ans1;
    }
};
