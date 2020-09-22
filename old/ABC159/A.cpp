#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n,m; cin>>n>>m;
  ll ans = 0;
  ans += m * (m - 1)/2;
  ans += n * (n - 1)/2;
  cout << ans << endl;
}