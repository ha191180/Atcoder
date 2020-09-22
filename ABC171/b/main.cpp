#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n,k;cin>>n>>k;
  vector<int> p(n);
  for (auto && a : p) {
    cin >> a;
  }

  sort(p.begin(),p.end());

  int ans = 0;

  for (int i = 0; i < k; i++) {
    ans += p.at(i);
  }

  cout << ans << endl;

}