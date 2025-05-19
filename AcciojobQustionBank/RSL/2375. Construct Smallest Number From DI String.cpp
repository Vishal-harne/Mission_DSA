//generate all posssible permutation and match one should be written


class Solution {
public:
   bool check(string &  per,string & patt){
     for(int i=0;i<patt.size();i++){
        if(patt[i]=='I'){
            if(per[i+1]<per[i]){
               return false;
            }
            
        }else{
            if(per[i+1]>per[i]){
                return false;
            }
              
        }
     }
     return true;
   }

    string smallestNumber(string pattern) {
        int n=pattern.size()+1;
        string number="";
        for(int i=1;i<=n;i++){
           number.push_back(i+'0');
        }
        string permutation=number;
        while(!check(permutation,pattern)){
            next_permutation(permutation.begin(), permutation.end());
        }

        return permutation;
    }
};
