class Solution {
public:
    long long reverse(long long x) {
       long long  ans=0;
        while(x!=0){
            long long  digit=x%10;
            ans = ans * 10 + digit;
            x=x/10;  
        }
        if (ans < INT_MIN || ans > INT_MAX) {
            return 0;
        }
        return static_cast<int>(ans);
    }
};
