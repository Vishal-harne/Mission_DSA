
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> & ans,int low,int high){
    int pivot=ans[low];
    int i=low;
    int j=high;
    while(i<j){
        while(ans[i]<=pivot &&  i<=high-1){
            i++;
        }
        while(ans[j]>pivot  &&  j>=low+1){
            j--;
        }
        if(i<j){
            swap(ans[i],ans[j]);
        }
    }
    swap(ans[low],ans[j]);
    int n=ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return j;
}

void QuickSort(vector<int> & ans,int low,int high){
    int partiti=0;
    if(low<high){
      int pivotindex=partition(ans,low,high);
      cout<<" pivotindex" <<ans[pivotindex]<<" "<<endl;
           cout<<"left hitted"<<endl;
       QuickSort(ans,low,pivotindex-1);
       
       int n=ans.size();
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
       
        cout<<"right hitted"<<endl;
        
      QuickSort(ans,pivotindex+1,high);
      
             for(int i=0;i<n;i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
    }
}

int main() {
  cout<<"Enter the value fo N: ";
  int n;
  cin>>n;
  vector<int>ans;
  for(int i=0;i<n;i++){
      int a;
      cin>>a;
      ans.push_back(a);
  }
  
  QuickSort(ans,0,n-1);
  for(int i=0;i<n;i++){
     cout<<ans[i]<<" ";
  }
  cout<<endl;

    return 0;
}
