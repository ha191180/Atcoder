#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  vector<int> v;
  int n,k; cin>>n>>k;
  vector<pair<int,int>> ab(n);
  for (int i = 0; i < n; i++)
  {
    cin >> ab.at(i).first >> ab.at(i).second;
  }
  sort(ab.begin(),ab.end());

  ll sum = 0;
  ll ans;

  

  for (int i = 0; i < n; i++)
  {
    sum += ab.at(i).second;
    if(k <= sum)
    {
      ans = i;
      break;
    }
  }
  if(ans == -1)ans = 0;

  cout << ab.at(ans).first << endl;


  


}