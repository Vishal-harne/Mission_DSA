class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
         int n=arr.size();
        int ind=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                arr[ind++]=arr[i];
            }
        }
       for(int j=ind;j<n;j++){
           arr[ind++]=0;
       }
        
    }
};
