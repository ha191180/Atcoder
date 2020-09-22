#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n - 1);
  for (auto &&i : a)
  {
    cin >> i;
  }
  map<int,int> mp;
  for (int i = 0; i < n - 1; i++)
  {
    if (mp.count(a.at(i)))
    {
      mp[a.at(i)]++;
    }
    else
    {
      mp[a.at(i)] = 1;
    }
    
  }
  
  for (int i = 1; i <= n; i++)
  {
    cout << mp[i] << endl;
  }
  
}