#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;


vector<pair<int,ll>> a;
long long mod = 998244353;
int main(){
  int n,k;cin >> n >> k;
  vector<int> s;
  for (size_t i = 0; i < k; i++)
  {
    int l,r;cin>>l>>r;
    for (int i = l; i <= r; i++)
    {
      s.push_back(i);
    }
    
  }
  a.push_back({1,1});
  for (auto &&i : s)
  {
    for (auto &&j : a)
    {
      ll tmp = (j.second+1) % mod;
      a.push_back({j.first+i,tmp});
    }
    
  }

  ll ans = 0;
  for (auto &&i : a)
  {
    cout << i.first << ' ' << i.second << endl;
    if (i.first == n)
    {
      ans+= i.second; 
    }
    
  }
  
  cout << ans << endl;
  
  
}