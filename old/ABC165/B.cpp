#include <bits/stdc++.h>
using namespace std;

int main(){
  unsigned long long x; cin >> x;
  unsigned long long i;
  unsigned long long ans = 0;
  for (unsigned long long i = 100; i < x; i += (unsigned long long)(i * 0.01))
  {
    //cout << i << endl;
    ans++;
  }
  cout << ans << endl;
  return 0;
}