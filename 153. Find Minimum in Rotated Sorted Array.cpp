class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        int mini=INT_MAX;
        if(arr[i]<=arr[j])return arr[i];
        while(i<=j){
            int mid=(i+j)/2;
            mini=min(mini,arr[mid]);
            if(arr[i]<=arr[mid]){
               //left is sorted
               mini=min(mini,arr[i]);
               i=mid+1;
              
            }else{
                 mini=min(mini,arr[mid]);
                 j=mid-1;
            }
        }
        return mini;
    }
};
