//Brute force solution
class Solution {
public:
    bool checkele(int dist,vector<int> &arr,int k){
        int cntcows=1;
        int last=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-last>=dist){
                cntcows++;
                 last=arr[i];
                
            }
            if(cntcows==k){
                    return true;
                }
           
        }
        return false;
    }
    int solve(int n, int k, vector<int> &arr) {
         sort(arr.begin(),arr.end());
         int m=arr[n-1]-arr[0];
         for(int i=1;i<=m;i++){
             if(checkele(i,arr,k)==false){
                 return i-1;
             }
         }
         
         return m;
    }
};




//optimised solution

class Solution {
public:
    bool checkmid(int dist,vector<int> &arr,int k){
        int cntcows=1;
        int last=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-last>=dist){
                cntcows++;
                 last=arr[i];
                
            }
            if(cntcows==k){
                    return true;
                }
           
        }
        return false;
    }
    int solve(int n, int k, vector<int> &arr) {
         sort(arr.begin(),arr.end());
         int i=1;
         int j=arr[n-1]-arr[0];
        while(i<j){
            int mid=i+(j-i)/2;
            if(checkmid(mid,arr,k)==true){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
         
         return i-1;
    }
};

