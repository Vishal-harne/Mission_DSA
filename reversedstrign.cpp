//string is your weak point do practise as much as you ccan

class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(char ch:s){
            if(isalnum(ch)){
                str+=tolower(ch);
            }
        }
        string reversed=str;
        reverse(str.begin(),str.end());
        return str==reversed;
    }
};
//l1  you cant directlt compare the result of reverse funciton becuase it return void valeu
//return str==reverse(str.begin(),str.end()
//read the error and understand the reason behind this and write it down
