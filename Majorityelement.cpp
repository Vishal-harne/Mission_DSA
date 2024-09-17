class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for (const auto& entry : mp) {
            if (entry.second > n / 2) {
                return entry.first;
            }
        }
        return -1;
    }
};
