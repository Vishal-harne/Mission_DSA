
class Solution {
  public:
  
    int largest(vector<int> &arr) {
        int largest=-2;
     for(int i=0;i<arr.size();i++){
         if(arr[i]>largest){
             largest=arr[i];
         }
     }
     return largest;
    }
};
