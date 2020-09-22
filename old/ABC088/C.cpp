#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  ll x,y; cin >> x >> y;
  vector<ll> A;
  A.push_back(x);
  for (int i = 0; A.at(i) * 2 <= y; i++)
  {
    A.push_back(A.at(i)*2);
  }
  cout << A.size() << endl;
}