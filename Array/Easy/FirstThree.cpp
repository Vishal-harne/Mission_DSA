class Solution {
  public:
    vector<int> getThreeLargest(vector<int>& arr) {
        int n=arr.size();
      map<int,int>mp;
      for(int i=0;i<n;i++){
          mp[arr[i]]++;
      }
      int maxi=INT_MIN;
      int Smaxi=INT_MIN;
      int Tmaxi=INT_MIN;
      
      for(int i=0;i<n;i++){
          if(arr[i]>maxi){
              Tmaxi=Smaxi;
              Smaxi=maxi;
              maxi=arr[i];
          }
          else if(arr[i]>Smaxi  &&  arr[i]<maxi){
               Tmaxi=Smaxi;
               Smaxi=arr[i];
             
          }
          else if(arr[i]<maxi && arr[i]<Smaxi  &&  arr[i]>Tmaxi){
              Tmaxi=arr[i];
          }
      }
      if(mp.size()==2){
           return {maxi,Smaxi};
      }
      else if(mp.size()==1){
          return {maxi};
      }
      return {maxi,Smaxi,Tmaxi};
      
    }
};
