#include <vector>
#include <cmath>
#include <algorithm>

class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int maxi = *std::max_element(piles.begin(), piles.end());
        int left = 1, right = maxi;
        while (left < right) {
            int mid = left + (right - left) / 2;
            int hoursNeeded = 0;

            for (int pile : piles) {
                hoursNeeded += std::ceil(static_cast<double>(pile) / mid);
            }

            if (hoursNeeded > h) {
                left = mid + 1;
            } else {
                right = mid; 
            }
        }

        return left;
    }
};
