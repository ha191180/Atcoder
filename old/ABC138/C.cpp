#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin >> n;
  vector<double> v(n);
  for (auto && a : v) {
    cin>>a;
  }
  sort(v.begin(),v.end());
  for (int i = 1; i < n; i++) {
    v.at(i) = (v.at(i - 1) + v.at(i)) / 2;
  }

  cout << v.at(n-1) << endl;
}