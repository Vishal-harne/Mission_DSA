#include <vector>
#include <algorithm>

class Solution {
public:
    int minDays(std::vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        
        // Check if it's impossible to make m bouquets
        if (m > n / k) return -1;

        int left = *std::min_element(bloomDay.begin(), bloomDay.end());
        int right = *std::max_element(bloomDay.begin(), bloomDay.end());

        while (left < right) {
            int mid = left + (right - left) / 2;
            int bouquets = 0;
            int flowers = 0;

            // Count the number of bouquets we can make with the current mid
            for (int day : bloomDay) {
                if (day <= mid) {
                    flowers++;  // Flower has bloomed
                    // Check if we can form a bouquet
                    if (flowers == k) {
                        bouquets++;
                        flowers = 0;  // Reset for the next bouquet
                    }
                } else {
                    flowers = 0;  // Reset if flower hasn't bloomed
                }
            }

            // Check if we can make at least m bouquets
            if (bouquets >= m) {
                right = mid;  // Try for fewer days
            } else {
                left = mid + 1;  // Increase days needed
            }
        }

        return left;  // left will be the minimum days needed
    }
};
