class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        // Early return if there are fewer than 4 numbers
        if (n < 4) return ans;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
            long long num1 = nums[i];  // First number

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates
                long long num2 = nums[j];  // Second number
                int p = j + 1;
                int q = n - 1;

                while (p < q) {
                    long long sum = static_cast<long long>(nums[p]) + static_cast<long long>(nums[q]); // Use long long
                    long long target_sum = static_cast<long long>(target) - (num1 + num2); // Ensure target is long long
                    if (sum == target_sum) {
                        // Cast num1 and num2 back to int for the output vector
                        ans.push_back({static_cast<int>(num1), static_cast<int>(num2), nums[p], nums[q]});
                        while (p < q && nums[p] == nums[p + 1]) p++; // Skip duplicates
                        while (p < q && nums[q] == nums[q - 1]) q--; // Skip duplicates
                        p++;
                        q--;
                    } else if (sum > target_sum) {
                        q--;
                    } else {
                        p++;
                    }
                }
            }
        }
        return ans;
    }
};
