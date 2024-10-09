class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            if(mp.find(t[j])!=mp.end()){
                mp[t[j]]--;
                if(mp[t[j]]==0){
                    mp.erase(t[j]);
                }
            }
        }
        cout<<mp.size()<<endl;
        if(mp.size()==0){
            return true;
        }
        return false;
    }
};
