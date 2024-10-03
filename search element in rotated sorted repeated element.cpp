class Solution {
public:
    bool search(vector<int>& arr, int x) {
        int n=arr.size();
        // if(n==1){
        //     if(x==arr[0]){
        //         return true;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==x)return true;
            if(arr[mid]==arr[i]   &&  arr[mid]==arr[j]  ){
                 i++;
                 j--;
                 continue;
            }
            if(arr[i]<=arr[mid]){
                //left hilf is sorted
                if(x>=arr[i]  && x<=arr[mid]){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
            else{
                //right half is sorted
                if(x>=arr[mid]  && x<=arr[j]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
        }
        return false;
    }
};
