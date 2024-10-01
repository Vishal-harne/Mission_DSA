class Solution {
public:
    int search(vector<int>& arr, int target) {
        int i=0;
        int j=arr.size()-1;
        int mid=(i+j)/2;
        while(i<=j){
            
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
            mid=(i+j)/2;
        }
        return -1;
    }
};
