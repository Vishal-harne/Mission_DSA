class Solution {
public:
    bool check(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        if(arr[n-1]>arr[0])cnt++;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1])cnt++;
            
          
        }
          if(cnt<=1)return true;
            else return false;
    }
};
View less
