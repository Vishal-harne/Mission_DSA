// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    cout<<"enter the value of n";
    int n;
    cin>>n;
     int p=n-1;
    for(int i=1;i<=n;i++){
        int a=65+p;
        for(int j=1;j<=i;j++){
            cout<<char(a)<<" ";
            a++;
        }
         cout<<endl;
         p--;
   }
       
    return 0;
}
