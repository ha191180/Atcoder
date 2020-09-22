#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin>>n;
  vector<int> a(n),b(n),c(n-1);
  for (auto &&i : a)
  {
    cin >>i;
  }
  for (auto &&i : b)
  {
    cin >>i;
  }
  for (auto &&i : c)
  {
    cin >>i;
  }
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    int meal = a.at(i) - 1;
    ans += b.at(meal);
    if(i < n - 1)
    {
      int next = a.at(i + 1) - 1;
      if (next == meal + 1)
      {
        ans += c.at(meal);
      }

    }

  }
  cout << ans << endl;

}