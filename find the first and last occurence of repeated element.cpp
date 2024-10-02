class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        vector<int> ans;
        int n = arr.size();
        int i = 0, j = n - 1;
        int left = -1, right = -1;

        // Special case for a single element array
        if (n == 1) {
            if (arr[0] == x) {
                ans.push_back(0);
                ans.push_back(0);
            } else {
                ans.push_back(-1);
                ans.push_back(-1);
            }
            return ans;
        }

        // Binary search
        while (i <= j) {
            int mid = (i + j) / 2;
            
            if (arr[mid] == x) {
                left = mid;
                right = mid;

                // Move leftwards
                while (left > 0 && arr[left] == arr[left - 1]) {
                    left--;
                }
                // Move rightwards
                while (right < n - 1 && arr[right] == arr[right + 1]) {
                    right++;
                }
                
                ans.push_back(left);
                ans.push_back(right);
                return ans;
            }
            else if (arr[mid] < x) {
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }

        // If element not found, return [-1, -1]
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};
