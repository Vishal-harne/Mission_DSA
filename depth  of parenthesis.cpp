class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int maxi=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                depth++;
                maxi=max(depth,maxi);
            }
            else if(s[i]==')'){
                depth--;
            }
        }
        if(maxi==INT_MIN){
            return 0;
        }
        return maxi;
    }
};
