class Solution {
public:
    bool checkpalindrome(int i, int j, string s) {
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int maxLength = 1;  // Single character is a palindrome by default

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (checkpalindrome(i, j, s)) {
                    int currentLength = j - i + 1;
                    if (currentLength > maxLength) {
                        start = i;
                        maxLength = currentLength;
                    }
                }
            }
        }

        return s.substr(start, maxLength);
    }
};
