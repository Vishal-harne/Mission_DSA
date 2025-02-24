// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void recbubblesort(vector<int> & ans,int i){
    if(i==0)return;
    int j=0;
    int maxi=i;
     while(j<i){
        if(ans[j]>ans[maxi]){
            maxi=j;
        }
        j++;
    }
    swap(ans[maxi],ans[i]);
    recbubblesort(ans,i-1);
}

int main() {
    cout<<"Enter the value of N: ";
   int n;
   cin>>n;
   vector<int>ans;
   for(int i=0;i<n;i++){
       int a;
       cin>>a;
       ans.push_back(a);
   }
      recbubblesort(ans,n-1);

    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
   }
    return 0;
}
