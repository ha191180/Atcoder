#include <bits/stdc++.h>
using namespace std;


int main(){
  long long n,k;cin>>n>>k;
  long long ans = n % k;
  long long tmp = abs(ans - k);
  //cout << ans << endl;
  //cout << tmp << endl;
  ans = min(ans, tmp);
  cout << ans << endl;
}