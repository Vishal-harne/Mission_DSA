#include <iostream>
using namespace std;
int main() {
    cout<<"enter the value of n";
    int n;
    cin>>n;
   int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          cout<<a<<" ";
          a++;
        }
        cout<<endl;
    }
    return 0;
}
