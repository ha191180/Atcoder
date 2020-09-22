#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;


double f(double x){
  double sum = (x*(x+1))/2;
  return sum/x;
};

int main(){
 int n,k;cin>>n>>k;
 vector<double> p(n);
 for (auto && a : p) {
   cin>>a;
 }
 vector<double> kitaichi(n);
 for (int i = 0; i < n; i++) {
   kitaichi.at(i) = f(p.at(i));
 }
 double tmp = 0;
 for (int i = 0; i < k; i++) {
   tmp += kitaichi.at(i);
 }
 double ans = -1;
 for (int i = k; i < n; i++) {
   tmp -= kitaichi.at(i-k);
   tmp += kitaichi.at(i);
  ans = max(tmp,ans);
 }
ans = max(tmp,ans);
 cout << fixed << setprecision(10) << ans << endl;

}