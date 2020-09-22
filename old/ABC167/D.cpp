#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  ll n,k;cin>>n>>k;
  vector<ll> a(n);
  for (auto &&i : a)
  {
    cin >> i;
  }


  ll now = 0;
  vector<bool> seen(n,false);
  vector<ll> loop;
  ll count = 0;
  ll i;
  ll last;
  for(i = 0; i < n; i++)
  {
    //cout << "now: " << now + 1 << endl;
    if (seen.at(now))
    {
      last = now;
      break;
    }
    else
    {
      ll nextposix = a.at(now) - 1;
      loop.push_back(now);
      seen.at(now) = true;
      now = nextposix;
      count++;
    }
  }

  //cout << "last: " << last << endl;
  /*
  for (int i = 0; i < 5; i++)
  {
    cout << loop.at(i) << endl;
  }
  */
  

  ll j;
  for (ll i = 0; i < loop.size(); i++)
  {
    if(loop.at(i) == last)
    {
      //cout << "i: " << i <<endl;
      j = i;
    }
  }
/*
  for (ll i = j; i < loop.size(); i++)
  {
    cout << loop.at(i) + 1 << " ";
  }
  cout << endl;
*/

  ll eles = loop.size()-j;
  ll rep = k - count; //あとの矢印の数
  ll diff = rep % eles;
  //cout << j << " " << count << " " << rep << " " << eles << " " <<  diff << endl;
  ll ans = loop.at(j + diff);
  

  cout << ans + 1 << endl;
}