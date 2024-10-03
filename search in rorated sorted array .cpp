class Solution {
public:
    int search(vector<int>& arr, int x) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==x){
                return mid;
            }
            if(arr[i]<=arr[mid]){
                //left high is sorted
                if(x>=arr[i]  && x<=arr[mid]){
                    j=mid-1;
                
                }
                else{
                   i=mid+1;
                }
            }else{
                //right half is sorted
                if(arr[mid]<=x  &&  arr[j]>=x){
                    i=mid+1;
                }else{
                    j=mid-1;
                }
            }
        }
        return -1;
    }
};
