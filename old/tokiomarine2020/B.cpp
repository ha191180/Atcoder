#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  ll a,v,b,w;cin>>a>>v>>b>>w;
  ll t;cin>>t;
  ll dist = abs(a-b);
  ll diff = v -w;
  if (dist >= diff * t)
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }
  
}