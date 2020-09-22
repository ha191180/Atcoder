#include <bits/stdc++.h>
using namespace std;


int main(){
  int n; cin >> n;
  unsigned long long ans = 0;
  for (int i = 0; i <= n; i++)
  {
    if(i%5 && i%3)
    {
      ans += i;
    }
  }
  cout << ans << endl;
  
}