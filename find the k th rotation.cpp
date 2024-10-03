class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        if(arr[0]<=arr[n-1])return 0;
        if(arr[0]>arr[1])return 1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]>arr[mid-1]  && arr[mid]>arr[mid+1]){
                return mid+1;
            }
            if(arr[i]<=arr[mid]){
                //ledt part is  sorted
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return 0;
    }
};
