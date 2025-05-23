class Solution {
public:
    string reverseWithSpacesIntact(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            if (s[i] == ' ') {
                i++;
            } else if (s[j] == ' ') {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};
