
//first loop will iterate over all element 
//second loop start from the index of first loop
//example i=3  then j=3 go till n 
//need to convert the string into int by stoi function



class Solution {
  public:
    int sumSubstrings(string &s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
          //empty string to update the string one the index change 
            string str="";
            for(int j=i;j<n;j++){
                str+=s[j];
              //to store the string into the integer
                int p=stoi(str);
                sum+=p;
            }
        }
        return sum;
    }
};
