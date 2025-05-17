#include <bits/stdc++.h>
using namespace std;
//time complexity  o(n3)  
void SubString(string str) {
  int n=str.size();
  for(int i=0;i<n;i++){
      string st=" ";
      for(int j=i;j<n;j++){
          st+=str[j];
          for(int k=0;k<st.size();k++){
              cout<<st[k];
          }cout<<endl;
      }
  }
}




//time complexity  o(n)2
#include <iostream>
using namespace std;

void printSubstrings(const string& str) {
    int n = str.size();

    for (int i = 0; i < n; ++i) {
        for (int len = 1; len <= n - i; ++len) {
            cout << str.substr(i, len) << endl;
        }
    }
}

int main() {
    string str;
    cin >> str;

    printSubstrings(str);
    return 0;
}
