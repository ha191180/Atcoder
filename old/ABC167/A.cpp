#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  string s,t;cin >> s >> t;
  bool flag = true;
  for (int i = 0; i < s.size(); i++)
  {
    if(s.at(i) != t.at(i))flag = false;
  }
  if(s.size() + 1 != t.size())flag = false;
  if(flag)cout << "Yes" <<endl;
  else cout << "No" <<endl;
  
}