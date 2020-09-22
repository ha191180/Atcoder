#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;
#define ALL(a)  (a).begin(),(a).end()


int main(){
  ll n,m,k;cin>>n>>m>>k;
  vector<ll> a(n),b(m);
  ll ans = 0;
  for (auto && i : a) {
    cin >> i;
  }
  for (auto && i : b) {
    cin >> i;
  }
  vector<ll> ruisekiwa(n),ruisekiwb(m);
  ruisekiwa.at(0) = a.at(0);
  ruisekiwb.at(0) = b.at(0);
  for (int i = 1; i < n; i++) {
    ruisekiwa.at(i) = ruisekiwa.at(i-1) + a.at(i);
  }
  for (int i = 1; i < m; i++) {
    ruisekiwb.at(i) = ruisekiwb.at(i-1) + b.at(i);
  }
  for (int i = 0; i < m; i++) {
    if( ruisekiwb.at(i) > k)
    {
      ans = i;
      break;
    }
    if (i == m-1)
    {
      ans = m;
    }
  }

  for (int i = 0; i < n; i++) {
    ll tmp = ruisekiwa.at(i);
    ll j = (int)(upper_bound(ALL(ruisekiwb),k-tmp)-ruisekiwb.begin());
    //cout << "i = " << i << "j = " <<  j << endl;
    if (j > 0) {
      //cout << ruisekiwa.at(i) << " + " << ruisekiwb.at(j-1) << " < " << k << endl;

      ans = max(i+j+1,ans);
    }
    else if (tmp <= k)
    {
      ans = max((ll)i+1,ans);
    }
    
  }
  cout << ans << endl;
}