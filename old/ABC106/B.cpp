#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

bool devisor8(int n){
  int tmp = 0;
  for (int i = 1; i <= n; i++)
  {
    if(n % i == 0)tmp++;
  }
  if (tmp == 8)return true;
  else return false;
}



int main(){
  int n; cin>>n;
  ll ans = 0;
  for (int i = 1; i <= n; i += 2)
  {
    if(devisor8(i))ans++;
  }
  
  cout << ans << endl;
}