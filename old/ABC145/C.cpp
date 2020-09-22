#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;
pair<int,int> posix;
double dist(pair<int,int> posix1, pair<int,int> posix2){
  ll x2 = pow(posix1.first - posix2.first,2);
  ll y2 = pow(posix1.second - posix2.second,2);
  return pow(x2 + y2, 0.5);
}

int main(){
  int n;cin>>n;
  vector<pair<int,int>> posix(n);
  //cout << "a";
  for (auto &&i : posix)
  {
    cin >> i.first >> i.second;
  }
  //cout << "b";
  vector<int> root(n);
  for (int i = 0; i < n; i++)
  {
    root.at(i) = i;
  }
  //cout << "c";
  
  double sum = 0;
  int cnt = 0;
  do
  {
    double tmpdist = 0;
    for (int i = 0; i < n - 1; i++)
    {
      int from = root.at(i);
      int to   = root.at(i + 1);
      tmpdist += dist(posix.at(from),posix.at(to));
    }
    sum += tmpdist;
    cnt++;
  } while (next_permutation(root.begin(),root.end()));
  
  
  cout << fixed << setprecision(10) << sum / (double)cnt << endl;
}