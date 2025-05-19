#include <bits/stdc++.h>
using namespace std;

void printanagramtogether( vector<string> & words,int n){
    map<string,vector<string>>mp;
    
    for(int i=0;i<n;i++){
        
      string sortedword=words[i];
       
      sort(sortedword.begin(),sortedword.end());
       
      mp[sortedword].push_back(words[i]);
       
    }
    
  for(auto  & group:mp){
      
          for(auto & word:group.second){
              cout<<word<<" ";
          }
     
  }
  cout<<endl;
}

int main() {
	int n;
	cin>>n;
	
	vector<string>words(n);
	for(int i=0;i<n;i++){
	    cin>>words[i];
	}
	
	printanagramtogether(words,n);
	
	return 0;

}
