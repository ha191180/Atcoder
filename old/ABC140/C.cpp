#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin >> n;
  vector<int> b(n-1);
  for (auto &&i : b)cin >> i;
  vector<int> a(n,INT32_MAX);
  for (int i = 0; i < n - 1; i++)
  {
    a.at(i) = min(a.at(i),b.at(i));
    a.at(i + 1) = b.at(i);
  }
  ll ans = 0;
 
  for (auto &&i : a)
  {
    ans += i;
  }
  cout << ans << endl;

  
}