#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

/*
int main(){
  int n;cin>>n;
  string s;cin>>s;
  unordered_map<string, int> mp ;
  for (int i = 0; i < n; i++) {
  for (int j = i+1; j < n; j++) {
  for (int k = j+1; k < n; k++) {
    string tmp;
    tmp += s.at(i);
    tmp += s.at(j);
    tmp += s.at(k);
    //cout << tmp << endl;
    mp[tmp]++;
  }}}
  cout << mp.size() << endl;
}

*/

int main()
{
  ll ans = 0;
  int n;cin >> n;
  string s;cin >>s;

  for (int i = 0; i < 1000; i++) {
    int tmp = i;
    char t[3];
    t[0] = char('0' + (tmp / 100));
    tmp %= 100;
    t[1] = char('0' + (tmp / 10 ));
    tmp %= 10;
    t[2] = char('0' + (tmp));

    //cout << t[0] << t[1] << t[2] << endl;
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (t[cnt] == s[j])cnt++;
      if (cnt == 3)break;
    }
    if(cnt >= 3)ans++;
  }

  cout << ans << endl;
}
