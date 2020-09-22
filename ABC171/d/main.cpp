#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin>>n;
  map<int,int> mp;
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    int a;cin >> a;
    sum += a;
    mp[a]++;
  }
  int q;cin>>q;
  for (int i = 0; i < q; i++) {
    int b,c;cin>>b>>c;
    int diff = c - b;
    int num = mp[b];
    mp[c] += mp[b];
    mp[b] = 0;
    sum += num*diff;
    cout << sum << endl;
  }

}