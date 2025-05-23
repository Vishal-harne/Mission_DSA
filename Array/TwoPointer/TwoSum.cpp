//using hashmap
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n=arr.size();
       map<int,int>mp;
       for(int i=0;i<n;i++){
           if(mp.find(target-arr[i])!=mp.end()){
               return true;
           }
           mp[arr[i]]++;
       }
       return false;
    }
};



//using two pointer approach
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
       int n=arr.size();
       sort(arr.begin(),arr.end())
       int i=0;
       int j=n-1;
       while(i<j){
           if(arr[i]+arr[j]==target){
               return true;
           }
           else if((arr[i]+arr[j])<target){
               i++;
           }
           else{
               j--;
           }
       }
       return false;
    }
};
