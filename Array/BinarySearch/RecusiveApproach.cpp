class Solution {
  public:
  
  int BS(int low,int high,vector<int> & arr,int k){
      while(low<=high){
          int mid=low+(high-low)/2;
          
          if(arr[mid]==k){
              while(arr[mid]==k){
                  mid--;
              }
              return mid+1;
          }
          else if(arr[mid]<k){
              return BS(mid+1,high,arr,k);
          }
          else{
              return BS(low,mid-1,arr,k);
          }
          
      }
      return -1;
  }
    int binarysearch(vector<int> &arr, int k) {
       return BS(0,arr.size()-1,arr,k);
    }
};
