class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
       int start=0;
       int end=arr.size()-1;
       
       while(start<=end){
           int mid=start+(end-start)/2;
           
           if(arr[mid]==k){
               while(arr[mid]==k){
                   mid--;
               }
               return mid+1;
           }
           else if (k<arr[mid]){
               end=mid-1;
           }
           else{
               start=mid+1;
           }
       }
       return -1;
    }
};
