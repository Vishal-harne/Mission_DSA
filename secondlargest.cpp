class Solution {
  public:
    
    int print2largest(vector<int> &arr) {
      // largest and larger make 2 varieble
       int largest=INT_MIN;
        int secondlar=INT_MIN;
      //check it it is more than 2 varieble if not -1
        if(arr.size()<2){
            return -1;
        }
      //
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
