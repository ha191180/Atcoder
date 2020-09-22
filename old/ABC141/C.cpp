#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n, k, q; cin >> n >> k >> q;
  vector<long long> a(n,k-q);
  for (int i = 0; i < q; i++)
  {
    int tmp; cin >> tmp;
    tmp--; //zero indexed
    a.at(tmp)++;
  }
  
  for (auto &&i : a)
  {
    if(i > 0)cout << "Yes" << endl;
    else cout <<"No" <<endl;
  }
  
}