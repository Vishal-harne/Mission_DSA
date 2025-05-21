class Solution {
  public:

    void rotateArr(vector<int>& arr, int d) {
        int n=arr.size();
        int ind=0;
       if(d>n){
           d=d%n;
       }
        while(ind<d){
          int a=arr[0];
          for(int i=0;i<n-1;i++){
              arr[i]=arr[i+1];
          }
          arr[n-1]=a;
          ind++;
       }
    }
};


//optimised Aproach
class Solution {
  public:

    void rotateArr(vector<int>& arr, int d) {
       int n=arr.size();
       if(d>n){
           d=d%n;
       }
       vector<int>ans;
       for(int i=d;i<n;i++){
           ans.push_back(arr[i]);
       }
       for(int j=0;j<d;j++){
           ans.push_back(arr[j]);
       }
       for(int i=0;i<ans.size();i++){
          arr[i]=ans[i];
       }
       
    }
};
