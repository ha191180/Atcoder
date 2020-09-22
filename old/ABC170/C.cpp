#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int x,n;cin>>x>>n;
  vector<int> p(n);
  for (auto && a : p) {
    cin>>a;
  }
  sort(p.begin(),p.end());

  int j = 0;
  int tmp = INT32_MAX;
  int ans = INT32_MAX;
  for (int i = -100; i <= 10000; i++) {
    //cout << "i = " << i << endl;
    if (j < n && p.at(j) == i)
    {
      j++;
      continue;
    }

    if(tmp > abs(x-i))
    {
      ans = i;
      tmp = abs(x-i);
    }
  }

  cout << ans << endl;
}
