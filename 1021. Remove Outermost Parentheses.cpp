class Solution {
public:
    string removeOuterParentheses(string s) {
        int first=true;
        int a=0;
        int b=0;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('  && first==true){
                first=false;
                
            }
            else if(s[i]=='('){
                ans.push_back(s[i]);
                a++;
            }
            else if(s[i]==')'  && a==b){
                first=true;
              
            }else{
                 ans.push_back(s[i]);
                b++;
            }

        }
        return ans;
    }
};


//
class Solution {
public:
    string removeOuterParentheses(string s) {
        int one=0;
        string ans;
        for(char c:s){
            if(c=='('){
                if(one>0){
                    ans.push_back(c);
                }
                one++;
            }
            else{
                one--;
                if(one>0){
                    ans.push_back(c);
                }
            }
        }
        return ans;
    }
};
