#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> d(n);
  int count = 0;
  for (auto &&i : d)
  {
    int a,j;cin>>a>>j;
    i = make_pair(a,j);
  }
  for (auto &&i : d)
  {
    if (i.first == i.second)
    {
      count++;
    }
    else
    {
      count = 0;
    }
    if (count == 3)
    {
      break;
    }
    
  }
  if (count == 3)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  
  
  
  
}