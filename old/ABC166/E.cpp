#include <bits/stdc++.h>
using namespace std;
/*
int main(){
  int n; scanf("%d",&n);
  long long a[2 * 100000];
  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &a[i]);
  }
  long long ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if(j - i == a[i] + a[j])ans++;
    }
    
  }
  printf("%lld\n", ans);
}
*/

int main(){
  int n; cin >> n;
  vector<int> a(n);
  for (auto &&i : a)
  {
    cin >> i;
  }
  vector<int> L(n);
  vector<int> R(n);
  for (int i = 0; i < n; i++)
  {
    L.at(i) = i + a.at(i);
    R.at(i) = i - a.at(i);
  }
  int count = 0;
  map<int,int> mp;
  for (auto &&i : L)
  {
    if(mp.count(i))
    {
      mp[i]++;
    }
    else
    {
      mp[i] = 1;
    }
    
  }
  for (auto &&i : R)
  {
    count += mp[i];
  }
  

  cout << count << endl;

}