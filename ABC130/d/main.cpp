#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n; cin>>n;
  ll k;  cin>>k;
  vector<int> a(n);
  for (auto &&i : a)
  {
    cin >> i;
  }
  
  long long ans = 0;
  
  ll sum = 0;
  int head = 0, tail = 1;
  sum += a[0];
  while (head < n)
  {
    if (sum >= k)
    {
      cout << "satisfied! " << head << " => " << tail << endl;
      cout << "ans " << ans << " => " ;
      ans += n - (tail - 1);
      cout << ans << endl;
      sum -= a[head];
      head++;
    }
    
    if (tail == n)
    {
      sum -+ a[head];
      head++;
    }
    else
    {
      sum += a[tail];
      tail++;
    }
    cout << "sum: " << sum << endl;
  }
  cout << ans << endl;
  
}