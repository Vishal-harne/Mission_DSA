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



//this is uisng aray

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void findsortbyselection(int ans[],int n){
   
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
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
  
   int ans[]={3,5,2,4,6,2};
   int n=sizeof(ans)/sizeof(ans[0]);
    findsortbyselection(ans,n);
     for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    return 0;
}
