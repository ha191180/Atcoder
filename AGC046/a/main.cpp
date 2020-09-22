#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  ll x;cin>>x;
  ll ans = 0;
  for (ll i = 1; i <= 360; i++) {
    if ((i*360) % x == 0){
      ans = (i*360) / x;
      break;
    }
  }
  cout << ans << endl;
}
