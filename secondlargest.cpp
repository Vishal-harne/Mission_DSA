class Solution {
  public:
    
    int print2largest(vector<int> &arr) {
       int largest=INT_MIN;
        int secondlar=INT_MIN;
        if(arr.size()<2){
            return -1;
        }
     for(int i=0;i<arr.size();i++){
         if(arr[i]>largest){
             secondlar=largest;
             largest=arr[i];
         }else if(arr[i]>secondlar  && arr[i]<largest){
             secondlar=arr[i];
         }
     }
     return (secondlar==INT_MIN)?-1:secondlar;
    }
};
