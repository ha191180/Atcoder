#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin>>n;
  n %= 1000;
  if (n != 0)
  cout << 1000 - n << endl;
  else 
  cout << 0 << endl;
}