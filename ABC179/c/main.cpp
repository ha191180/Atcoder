#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin >> n;
  ll ans = 0;
  int b;
  for (int a = 1; a < n; a++)
  {
    b = n / a;
    if (a * b >= n)
    {
      b--;
      if (b <= 0)
      {
        continue;
      }
      
    }
    ans += b;
    
  }
    
    
  
  cout << ans << endl;
}