#include <bits/stdc++.h> 
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
   string str1,str2;

   for(int i=0;i<n;i++){
       str1[i]=(a[i]+'0');
   }

   for(int j=0;j<m;j++){
       str2[j]=(b[j]+'0');
   }

  

   int num1=stoi(str1);
   int num2=stoi(str2);

   int res=num1+num2;

   vector<int>ans;

   string str3=to_string(res);


   for(int i=0;i<str3.size();i++){
       ans.push_back(str3[i]-'0');
   }

    return ans;
}

