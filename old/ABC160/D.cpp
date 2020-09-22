#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> G;

int dfs(ll d){

}


int main(){
  ll n,x,y;cin>>n>>x>>y;
  G.resize(n);
  for (ll i = 0; i < n; i++)
  {
    if (i < n - 1)
    G.at(i).push_back(i + 1);
    if (i > 0)
    G.at(i).push_back(i - 1);
  }
  G.at(x-1).push_back(y-1);
  G.at(y-1).push_back(x-1);


  int tmp = 1;
  for (auto &&i : G)
  {
    cout << tmp << ": ";
    tmp++;
    for (auto &&j : i)
    {
      cout << j + 1 << " ";
    }
    cout << endl;

  }

  for (ll start = 0; start < n; start++)
  {
    for (ll goal = start; goal < n; goal++)
    {
      
    }
    
  }
  
  
  
}