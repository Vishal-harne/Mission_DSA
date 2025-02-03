// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    cout<<"eneter the value of n";
   int n;
   cin>>n;
   int space=n-1;
   for(int i=1;i<=n;i++){
      for(int k=(n-i);k>=1;k--){
          cout<<"  ";
      }
       for(int j=1;j<=i+(i-1);j++){
           cout<<"*"<<" ";
       }
       cout<<endl;
   }
    for(int i=n;i>=1;i--){
      for(int k=1;k<=(n-i);k++){
          cout<<"  ";
      }
       for(int j=1;j<=i+(i-1);j++){
           cout<<"*"<<" ";
       }
       cout<<endl;
   }
    return 0;
}
