class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return true;
        }
        int j=1;
        while( j<s.size()){
        string ans;
        for(int i=j;i<s.size();i++){
           ans+=s[i];
        }
        for(int k=0;k<j;k++){
            ans+=s[k];
        }
        if(ans==goal){
            return true;
        }
        j++;
        }
        return false;
    }
};
