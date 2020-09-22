#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;


void dump(vector<int> vec)
{
  bool flag = true;
  reverse(vec.begin(),vec.end());
  for (auto && a : vec) {
    if (flag && a <= 0)
    {
      continue;
    }
    else 
    {
      cout << char('a' + a - 1);
      flag = false;
    }
  }
  cout << endl;
}

void fix(vector<int> &vec)
{
  for (int i = 0; i < vec.size()-1; i++) {
    if (vec.at(i) <= 0)
    {
      vec.at(i)+=26;
      vec.at(i+1)--;
    }
  }
}


signed main(){
  ll n;cin>>n;
  vector<int> ans;
  do {
    ans.push_back(n%26);
  } while (n /= 26);
  fix(ans);
  dump(ans);

}