// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void findsorted(vector<int> & ans){
    int n=ans.size();
    for(int i=0;i<n;i++){
         int mini=i;
        for(int j=i;j<n;j++){
            if(ans[j]<ans[mini]){
                mini=j;
            }
        }
        int temp=ans[mini];
        ans[mini]=ans[i];
        ans[i]=temp;
    }
}
int main() {
   cout<<"ENter the value of n: ";
   int n;
   cin>>n;
   vector<int>ans;
    for(int i=0;i<n;i++){
            int a;
            cin>>a;
          ans.push_back(a);
    }
    findsorted(ans);
    cout<<"value of array after sorting";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
