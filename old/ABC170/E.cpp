#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n,q;cin>>n>>q;
  map<int,int> schools;
  for (int i = 0; i < n; i++) {
    int a,b;
    cin>>a>>b;
    schools[b] = max(schools[b],a);
  }
  int ans = INT32_MAX;
  for (auto && a : schools) {
    ans = min(a.second,ans);
  }
  cout << ans << endl;

}