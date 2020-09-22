#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

vector<vector<int>> bitExplore(int n)
{
  vector<vector<int>> ret;
  for (int bit = 0; bit < (1 << n); ++bit)
  {
    vector<int> S;
    for (int i = 0; i < n; ++i)
    {
      if (bit & (1 << i))
      {
        S.push_back(i);
      }
    }

    ret.push_back(S);
  }
  return ret;
}


int blacks(vector<string> graph)
{
  int cnt = 0;
  for (auto && a : graph) 
  for (auto && b : a)
  {
    if (b == '#') cnt++;
  }
  return cnt;   
}

int main(){
  int h,w,k;cin>>h>>w>>k;
  vector<string> g(h);
  for (auto && a : g) {
    cin >> a;
  }
  ll ans = 0;
  auto choseH = bitExplore(h);
  auto choseW = bitExplore(w);
  
  for (auto && i : choseH)
  for (auto && j : choseW)
  {
    auto newg = g;
    for (auto && a : i)
    {
      for (int tmp = 0; tmp < w; tmp++) {
        newg.at(a).at(tmp) = '.';
      }
    }
    for (auto && a : j)
    {
      for (int tmp = 0; tmp < h; tmp++) {
        newg.at(tmp).at(a) = '.';
      }
    }
    if(blacks(newg) == k) ans++;

      
  }
    
    
  cout << ans << endl;
}