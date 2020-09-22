#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin >> n;
  vector<int> p(n),q(n);
  for (auto &&i : p)
  {
    cin >>i;
  }
  for (auto &&i : q)
  {
    cin >> i;
  }

  vector<int> tmp(n);
  for (int i = 0; i < n; i++)
  {
    tmp.at(i) = i+1;
  }

  ll count = 0;
  ll pnum = -1;
  ll qnum = -1;

  do
  {
    if(tmp == p) pnum = count;
    if(tmp == q) qnum = count;
    count++;
  } while (next_permutation(tmp.begin(),tmp.end()));
  

  cout << abs(pnum - qnum) << endl;
  
  

  
}
