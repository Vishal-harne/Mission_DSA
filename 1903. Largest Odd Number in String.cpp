class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int n=num.size();
        int j=n-1;
        while(j>=0){
            if((num[j] - '0')%2==1){
                for(int i=0;i<=j;i++){
                    ans+=num[i]; 
                }
                return ans;
            }
            else
            {
                 j--;
            }
           
        }
        return ans;
    }
};
