#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n,m,x;cin>>n>>m>>x;
  vector<int> c(n);
  Graph a(n,vector<ll>(m));
  for (int i = 0; i < n; i++)
  {
    cin >> c.at(i);
    for (int j = 0; j < m; j++)
    {
      cin >> a.at(i).at(j);
    }
    
  }

  ll ans = INT64_MAX;
  bool lastcheck = false;
  
  for (int bit = 0; bit < (1<<n); bit++)
  {
    vector<int> achieve(m,0);
    bool clear = true;
    ll tmp = 0;
    for (int i = 0; i < n; i++)
    {
      if(bit & (1<<i))
      {
        tmp += c.at(i);
        for (int j = 0; j < m; j++)
        {
          int plus = a.at(i).at(j);
          achieve.at(j) += plus;
        }
        
      }

    }
    for (auto &&i : achieve)
    {
      if (i < x) clear = false;
    }
    
    if(clear)
    {
      ans = min(ans, tmp);
      lastcheck = true;
    }    
  }
  
  if(lastcheck)cout << ans << endl;
  else cout << -1 << endl;
}