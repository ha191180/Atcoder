#include <bits/stdc++.h>
using namespace std;

int main(){
  unsigned long long a, b, n; cin >> a >> b >> n;
  if (b > n)cout << (a * n)/b - a * (n / b) << endl;
  else cout << (a * (b - 1))/b - a * ((b - 1) / b) << endl;
  
  return 0;
}