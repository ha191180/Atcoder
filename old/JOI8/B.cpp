#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  //ifstream in("input.txt");
  //cin.rdbuf(in.rdbuf());
  ll d,n,m;cin>>d>>n>>m;
  vector<ll> dv(n);
  dv.at(0) = 0;
  for (ll i = 1; i < n; i++)
  {
    cin >> dv.at(i);
  }
  dv.push_back(d);
  vector<ll> k(m);
  for (ll i = 0; i < m; i++)
  {
    cin >> k.at(i);
  }
  
  ll ans = 0;
  for (ll i = 0; i < m; i++)
  {
    ll tmp = INT32_MAX;
    for (ll j = 0; j < n + 1; j++)
    {
      tmp  = min(tmp, abs(dv.at(j) - k.at(i)));
    }
    ans += tmp;
  }
  
  //ofstream out("output.txt");
  cout << ans << endl;


}