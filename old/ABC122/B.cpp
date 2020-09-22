#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  string s; cin >> s;
  int ans = -1;
  for (int  left = 0; left < s.size(); left++)
  {
    for (int right = left; right < s.size(); right++)
    {
      char c = s.at(right);
      if (c == 'A' ||c == 'C' ||c == 'G' ||c == 'T')
      {
        if(right == s.size() - 1)
        {
          ans = max(ans, right - left + 1);
        }
        continue;
      }
      else 
      {
        ans = max(ans, right - left);
        left = right;
        break;
      }
      
    }
    
  }
  
  cout << ans << endl;

}