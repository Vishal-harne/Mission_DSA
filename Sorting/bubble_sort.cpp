// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void findsort(vector<int> & ans){
    int n=ans.size();
    for(int i=n-1;i>=0;i--){
        int maxi=i;
        for(int j=0;j<i;j++){
            if(ans[j]>ans[maxi]){
                maxi=j;
            }
        }
        int temp=ans[maxi];
        ans[maxi]=ans[i];
        ans[i]=temp;
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
