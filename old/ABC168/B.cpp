#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int k;cin>>k;
  string s;
  cin>>s;
  if(s.size() <= k) { cout << s << endl;}
  else {
    string sub = s.substr(0,k);
    cout << sub << "..." <<endl;
  }
    
}