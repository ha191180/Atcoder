#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  ll n;cin>>n;
  ll sum[10000005] ;
  fill_n(sum,10000005,1);
  for (ll i = 2; i <= n; i++) {
    for (ll j = 1; j * i <= 10000000; j++) {
      sum[i*j]++;
    }
  }

  ll ans = 0;
  for (ll i = 1; i <= n; i++) {
    ans += i * sum[i];
  }

  cout << ans << endl;
}