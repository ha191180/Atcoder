#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  vector<long long> h(n);
  for (int i = 0; i < n; i++)
  {
    cin >> h.at(i);
  }
  vector<vector<int>> path(n);
  for (int i = 0; i < m; i++)
  {
    int a,b;
    cin >> a >> b;
    a--;b--; //zero indexed
    path.at(a).push_back(b);
    path.at(b).push_back(a);
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    bool flag = true;
    for (auto &&j : path.at(i))
    {
      if(h.at(j) >= h.at(i)){
        flag = false;
        break;
      }
    }
    if(flag){
      ans++;
    }
  }
  cout << ans << endl;
}