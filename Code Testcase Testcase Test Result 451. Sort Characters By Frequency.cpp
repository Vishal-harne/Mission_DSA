
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }

        vector<pair<char, int>> vec(mp.begin(), mp.end());
        
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;
        });

        string result;
        for (const auto& pair : vec) {
            result += string(pair.second, pair.first); 
        }
        return result;
    }
};
