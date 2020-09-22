#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin>>n;
  vector<int> a(n);for (auto &&i : a)
  {
    cin >> i;
  }
  
  vector<int> b(n);for (auto &&i : b)
  {
    cin >>i;
  }
  
  vector<int> c(n);for (auto &&i : c)
  {
    cin >>i;
  }
  ll ans = 0;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());
  for (int i = 0; i < n; i++)
  {
    ll tmp = 1;
    auto aitr = lower_bound(a.begin(),a.end(),b.at(i));
    tmp *= distance(a.begin(),aitr);
    auto citr = upper_bound(c.begin(),c.end(),b.at(i));
    tmp *= distance(citr,c.end());
    ans += tmp;
  }
  cout << ans << endl;
}