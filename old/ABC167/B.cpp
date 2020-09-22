#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int a,b,c,k;cin>>a>>b>>c>>k;
  if(a >= k)cout << k << endl;
  else if(a + b>= k)cout << a << endl;
  else cout << a - (k - a - b) << endl;
}