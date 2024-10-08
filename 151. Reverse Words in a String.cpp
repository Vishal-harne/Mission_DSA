class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        string p;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '  &&  !p.empty()){
                ans.push_back(p);
                p.clear();
            }
            else if(s[i]!=' '){
                p.push_back(s[i]);
            }
        }
        if(!p.empty()){
            ans.push_back(p);
        }

        reverse(ans.begin(),ans.end());
        string final;
        for(int i=0;i<ans.size();i++){
            final+=ans[i];
            if(i<ans.size()-1){
                final+=" ";
            }
        }
        return final;
    }
};
