
#include <bits/stdc++.h>
using namespace std;
void findsort(vector<int> & ans){
    int n=ans.size();
   for(int i=0;i<n;i++){
       //here we will check till the first ellemnt the element which lesser than its previus we will put it just at left of that ellemnt which is greter than this till the first element
     int j=i;
          while(j>0 && ans[j-1]>ans[j]){
              int temp=ans[j];
              ans[j]=ans[j-1];
              ans[j-1]=temp;
              j--;
          }
          for(int k=0;k<n;k++){
              cout<<ans[k]<<" ";
          }cout<<endl;
       }
   }


int main() {
  cout<<"NEter the value of n: ";
  int n;
  cin>>n;
  vector<int>ans;
  for(int i=0;i<n;i++){
      int a;
      cin>>a;
      ans.push_back(a);
  }
  findsort(ans);
  cout<<"after sorting the array";
    for(int i=0;i<n;i++){
     cout<<ans[i]<<" ";
  }
  

    return 0;
}
