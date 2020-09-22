#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin>>n;
  vector<ll> a(n);
  for (auto && i : a) {
    cin>>i;
  }
  for (auto && i : a) {
    if(i==0)
    {
      cout << 0 << endl;
      return 0;
    }
  }

  sort(a.begin(),a.end());
  ll ans = 1;
  bool flag = false;
  for (auto && i : a) {
    if (  ans <= 1000000000000000000/i)
    {
      ans *= i;
      
    }
    else {
      flag = true;
      break;
    }
  }

if (ans > 1000000000000000000) flag = true;

  if(flag){
    cout << "-1" << endl;
  }
  else {
    cout << ans << endl;
  }
}