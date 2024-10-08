class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        int n=strs.size();
        string ans;
        for(int i=1;i<n;i++){
            string current=strs[i];
            int j=0;
            while(j<current.size()  && j<prefix.size()){
                if(current[j]==prefix[j]){
                    ans+=current[j];
                    j++;
                }else{
                    break;
                }
            }
            prefix=ans;
            ans.clear();
        }
        return prefix;
    }
};
