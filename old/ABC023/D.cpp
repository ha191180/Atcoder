#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;
struct baloon
{
  int h;
  int s;
  bool operator < (baloon obj){
    return this->s < obj.s;
  }
};

const ll xmax = INT64_MAX;

int main(){
  int n;cin>>n;
  vector<ll> h(n);
  vector<int> s(n);
  for (int i = 0; i < n; i++)
  {
    cin >> h.at(i) >> s.at(i);
  }
  ll hmax = -1;
  for (auto &&i : h)
  {
    hmax= max(hmax,i);
  }
  
  
  ll left = 0;
  ll right = xmax;
  
  while (right - left > 1)
  {
    ll x = (right + left) / 2;
    vector<double> time(n);
    bool flag = true;
    for (int i = 0; i < n; i++) time.at(i) = (double)(x - h.at(i))/(double)s.at(i);
    sort(time.begin(),time.end());
    for (int i = 0; i < n; i++) if (time.at(i) < i) flag = false;
    //cout << "left: " << left << "right: " << right << endl;
    if (flag) right = x;
    else left = x;
  }
  
  cout << right << endl;
  
  
}