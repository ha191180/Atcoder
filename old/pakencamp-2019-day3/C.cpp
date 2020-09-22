#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n,m;cin >> n >>m;
  vector<vector<int>> a(n,vector<int>(m));
  for (auto &&i : a)
  {
    for (auto &&j : i)
    {
      cin >> j;
    }
    
  }

  ll ans = 0;
  for (int i = 0; i < m; i++)
  for (int j = i + 1; j < m; j++)
  {
    ll tmp = 0;
    for (int k = 0; k < n; k++)
    {
      tmp += max(a.at(k).at(i), a.at(k).at(j));
    }
    ans = max(tmp, ans);
    
  }
  
  cout << ans << endl;
  
}