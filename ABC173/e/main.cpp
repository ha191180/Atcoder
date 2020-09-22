#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;
#include <cstdint>
const ll mod = 1e9+7;

int main(){
  int n,k;cin>>n>>k;
  vector<pair<int,int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i).first;
    if (a.at(i).first < 0)
    {
      a.at(i).second = 1;
      a.at(i).first *= -1;
    }
  }
  sort(a.begin(),a.end());
  ll ans = 1;
  ll odds = 0;
  for (int i = 0; i < k; i++) {
    ans *= a.at(i).first;
    ans %= mod;
    if(a.at(i).second) odds++;
  }
  cout << ans << endl;
}