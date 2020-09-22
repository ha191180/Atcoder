#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin>>n;
  vector<long double> left(n);
  vector<long double> right(n);
  for (int i = 0; i < n; i++) {
    long double a,b;cin>>a>>b;
    left.at(i) = a/b;
    right.at(i) = -1 * b/a;
  }
  
}