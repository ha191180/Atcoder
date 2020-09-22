#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  string s,t;cin>>s>>t;
  ll cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) != t.at(i))cnt++;
  }

  cout << cnt << endl;
}