class Solution {
public:
    vector<int> findWordsContaining(vector<string>& arr, char x) {
               vector<int>ans;
               int n=arr.size();
               for(int i=0;i<n;i++){
                 //to store the string
                string s=arr[i];
                int m=s.size();
                 //to avoid the repeatative character
                bool find=false;
                for(int j=0;j<m;j++){
                  //to acces the character
                    char c=s[j];
                    if(x==c && find==false){
                        ans.push_back(i);
                        find=true;
                    }
                }

               }
               return ans;
        }    
    
};
