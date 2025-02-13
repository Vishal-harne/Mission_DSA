class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
       map<int,int>m;
       vector<int>ans;
       for(int i=0;i<arr.size();i++){
           m[arr[i]]++;
       }
        for(int i=0;i<arr.size();i++){
          ans.push_back(m[i+1]);
       }
       return ans;
    }
};
