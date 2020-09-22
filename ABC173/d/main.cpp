#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &&a : a)
  {
    cin >> a;
  }
  sort(a.begin(), a.end(), greater<int>());
  ll ans = 0;
  if (n % 2 == 0)
  {
    for (int i = 0; i < n / 2; i++)
    {
      ans += a.at(i);
    }
    for (int i = 1; i < n / 2; i++)
    {
      ans += a.at(i);
    }
  }
  else
  {
    for (int i = 0; i < n / 2; i++)
    {
      ans += a.at(i);
    }
    for (int i = 1; i < n / 2 + 1; i++)
    {
      ans += a.at(i);
    }
  }
  cout << ans << endl;
}