class Solution {
  public:
    bool isPalindrome(int n) {
       string str="";
       while(n>0){
           int R=n%10;
           str.append(to_string(R));
           n=n/10;
       }
       
       int i=0;
       int j=str.size()-1;
       while(i<=j){
           if(str[i]!=str[j]){
               return false;
           }
           i++;
           j--;
       }
       return true;
    }
};
