class Solution {
  public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;//datatype kya hai 
        for(int i=1;i<=n;i++){
            if(i%3==0  && i%5==0){
                ans.push_back("FizzBuzz");
            }
            else if(i%3==0){
                ans.push_back("Fizz");
            }
            else if(i%5==0){
                ans.push_back("Buzz");
            }else{
                ans.push_back(to_string(i));//yaha par datatype kya hai 
            }
        }
        return ans;
    }
};
