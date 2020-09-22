#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n,l;cin>>n>>l;
  vector<string> s(n);
  for (auto && a : s) {
    cin>>a;
  }

  sort(s.begin(),s.end());
  for (auto && a : s) {
    cout << a;
  }
  cout << endl;
}
