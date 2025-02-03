#include <iostream>
using namespace std;
int main() {
    cout<<"enter the value of n";
    int n;
    cin>>n;
   int arr[]={};
    for(int i=n;i>=1;i--){
           int a=65;
        for(int j=1;j<=i;j++){
           cout<<char(a)<<" ";
           a++;
        }
        cout<<endl;
    }
    return 0;
}
