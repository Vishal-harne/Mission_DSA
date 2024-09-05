

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 
        
       
        reverse(nums.begin(), nums.end());
       
        reverse(nums.begin(), nums.begin() + k);
      
        reverse(nums.begin() + k, nums.end());
        
       
        for (int p = 0; p < nums.size(); p++) {
            cout << nums[p] << " ";
        }
        cout << endl;
    }
};
