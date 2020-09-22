#include <bits/stdc++.h>
using namespace std;


int main(){
  int n; cin >> n;
  string s; cin >> s;
  map<char,long long int> mp;
  for (auto &&i : s)
  {
    if(i == 'R') mp['R']++;
    if(i == 'G') mp['G']++;
    if(i == 'B') mp['B']++;
  }
  long long ans = mp['R'] * mp['B'] * mp['G'];

  for (int i = 0; i < n; i++)
  {
    for (int k = i + 2; k < n; k += 2)
    {
      int j = (i + k) / 2;
      //cout << "(" << i << "," << j << "," << k << ")" << endl;
      if (s.at(i) != s.at(j) && s.at(i) != s.at(k) && s.at(j) != s.at(k))
      {
        ans--;
      }
      
    }
    
  }
  cout << ans << endl;
  
}