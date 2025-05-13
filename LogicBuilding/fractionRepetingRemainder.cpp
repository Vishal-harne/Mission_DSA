

class Solution {
  public:
    string calculateFraction(int a, int b) {
       //check if a==0
       if(a==0)return "0";
       //check if any of it is negative if negative give negative sign 
       string res=(a<0) ^ (b<0)?"-":"";
       
       a=abs(a);
       b=abs(b);
       //store the result inside the res stirng
       res+=to_string(a/b);
       //check for remander
       int rem=a%b;
       //it rem is zero retunr ans
       if(rem==0)return res;
       
       res.append(".");
       //if not then enter point and find out the point after decomel
       unordered_map<int,int>mp;
       //until rem become zero find out remainder after point 
       while(rem>0){
           //for repeating need to check does this exit in map if exist then ,ake it reccuring 
           if(mp.find(rem)!=mp.end()){
               res.insert(mp[rem],"(");
               res.append(")");
               break;
           }
           
           //this for non repeating 
           mp[rem]=res.size();
           rem=rem*10;
           res+=to_string(rem/b);
           rem=rem%b;
       }
       return res;
    }
};
