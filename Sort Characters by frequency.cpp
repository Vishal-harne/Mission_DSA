class Solution {
public:
    string frequencySort(string s) {
//just need to store element into map
        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }
//store into the map

        vector<pair<char, int>> vec(mp.begin(), mp.end());
        //sort according to the frquency of character max count
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
