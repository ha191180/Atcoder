#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n,k;cin>>n>>k;
  map<int,int> cnt;
  for (int i = sqrt(n); i <= n; i++) {
    cnt[i%k]++;
  }
  ll ans = 0;
  for (int i = 0; i < k; i++) {
    ll tmp;
    tmp = pow(cnt[i],3);
    ans += tmp;
  }
  cout<<ans<<endl;
}