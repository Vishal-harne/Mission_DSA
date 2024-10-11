class Solution {
public:
    string frequencySort(string s) {
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        vector<pair<int,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](const auto &a ,const auto &b){
            return a.second>b.second;
        });
        string ans;
        for(auto pair:vec){
            ans+=string(pair.second,pair.first);
        }
        return ans;
    }
};
