

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
       unordered_map<int,int>mp;
       int maxi=0;
       int csum=0;
       for(int i=0;i<n;i++){
           
           csum+=arr[i];
           
           if(csum==0){
               maxi= i+1;
           }
           
           if(mp.find(csum)!=mp.end()){
                maxi=max(maxi,i-mp[csum]);
           }
           else{
                mp[csum]=i; 
           }
         }
          
           return maxi;
       }
     
    
};
