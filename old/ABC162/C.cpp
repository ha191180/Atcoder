#include <bits/stdc++.h>
using namespace std;


int main(){
  long long ans = 0;
  int k; cin >> k;
  for (int a = 1; a <= k; a++)
  for (int b = 1; b <= k; b++)
  for (int c = 1; c <= k; c++)
  {
    ans += __gcd(__gcd(a,b),c);
  }
  cout << ans << endl;
}
