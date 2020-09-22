#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  vector<unsigned long long> N;
  unsigned long long tmp = 0;
  N.push_back(0);
  for (int i = 0; i <= n; i++)
  {
    N.push_back(i + tmp);
    tmp += i;
    tmp %= (1000000007);
  }

/*
  cout << "N: ";
  for (auto &&i : N)
  cout << i << " ";
  cout << endl;
*/

long long ans = 0;
  for (int i = k; i <= n + 1; i++)
  {
    long long int min = N.at(i);
    long long int max = N.at(n+1)-N.at(n+1-i);
    //cout << "if k = " << i << " is ("<< N.at(n+1) << " - " << N.at(n+1-i) << ") - " << min << " = " << max - min << "\n";
    ans += max - min + 1;
    ans %= 1000000007;
    if (ans < 0)
    {
      ans += 1000000007;
    }
    
  }
  
  ans %= 1000000007;
  cout << ans << endl;
}