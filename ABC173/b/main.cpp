#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int n;cin>>n;
  map<string, int> mp;
  mp["AC"] = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }
  cout << "AC x " << mp["AC"] << endl;
  cout << "WA x " << mp["WA"] << endl;
  cout << "TLE x " << mp["TLE"] << endl;
  cout << "RE x " << mp["RE"] << endl;


}