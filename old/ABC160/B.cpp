#include <bits/stdc++.h>
using namespace std;


int main(){
  int x; cin >> x;
  int y500 = 0;
  int y5   = 0;
  y500 = x / 500;
  x %= 500;
  y5 = x / 5;
  int ans = y500 *1000 + y5 * 5;
  cout << ans << endl;
}