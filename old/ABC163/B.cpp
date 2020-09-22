#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int m; cin >> m;
  vector<int> a(m);
  for (auto &&i : a)
  {
    cin >> i;
  }
  for (int i = 0; i < m; i++)
  {
    if (n >= a.at(i)) n -= a.at(i);
    else 
    {
      cout << -1 << endl;
      return 0;
    }
    
  }
  cout << n << endl;

}