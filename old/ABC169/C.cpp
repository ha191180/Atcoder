#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  ll a;cin>>a;
  string b;cin>>b;
  
  b.erase(1,1);
  ll b_fix = stoll(b);
  cout << b_fix << endl;


  cout << a * b_fix / 100 << endl;

}