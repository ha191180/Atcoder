#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int x[5];
  for (int i = 0; i < 5; i++) {
    cin >> x[i];
  }
  for (int i = 0; i < 5; i++) {
    if(x[i] == 0)
    {
      cout << i+1 << endl;
    }
  }
}