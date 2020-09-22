#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int x,y;cin>>x>>y;
  bool flag = false;
  for (int i = 0; i <= x; i++) {
    int kame = i;
    int turu = x - i;
    if (kame * 4 + turu * 2 == y)
    {
      flag = true;
    }
  }
  cout << (flag? "Yes":"No") << endl;
}