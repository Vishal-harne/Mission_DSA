

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        vector<int>ans;
        int floor=-1;
        int ceil=2345656;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                floor=arr[i];
                ans.push_back(floor);
                ans.push_back(floor);
                return ans;
            }
            else if(arr[i]<x){
                floor=max(floor,arr[i]);
                
        }else{
            
               ceil=min(ceil,arr[i]);
        }
        }
        if(ceil==2345656){
            ceil=-1;
        }
        ans.push_back(floor);
        ans.push_back(ceil);
        return ans;
    }
};
