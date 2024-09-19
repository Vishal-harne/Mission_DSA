
//this is implementation via set 
//first we vomit vector into set
//set pointer to first and previus element
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> s(nums.begin(), nums.end());
        int maxi = 1; // Start at 1 because we count the current element
        int cnt = 1;

        auto it = s.begin(); // Create an iterator for the set
        int prev = *it; // Initialize previous element with the first element

        // Iterate over the set starting from the second element
        for (++it; it != s.end(); ++it) {
            if (*it - prev == 1) {
                cnt++;
            } else {
                cnt = 1; // Reset count if not consecutive
            }
            maxi = max(maxi, cnt);
            prev = *it; // Update previous to current
        }
        
        return maxi;
       
    }
};

//using onordered set
class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int ans = 0, cur_num, cur_stack;
        unordered_set<int> numbers(begin(nums), end(nums));
        for(auto num:numbers)
        {
            if(numbers.find(num - 1) == numbers.end())
            {
                cur_num = num;
                cur_stack = 1;
                while(numbers.count(cur_num + 1))
                {
                    cur_num += 1;
                    cur_stack += 1;
                }
                ans = max(ans, cur_stack);
            }
        }
        return ans;
    }
};

