#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  string s;cin>>s;
  ll k;cin>>k;
  ll cnt;
  for (int i = 0; i < s.size()-1; i++) {
    if (s.at(i) == s.at(i+1))cnt++;
  }
  ll ans = cnt * k;
  if ( s.at(0) == s.at(s.size()-1) ) {
    ans += (k-1);
  }
  cout << ans << endl;

}