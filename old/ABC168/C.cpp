#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;
const double pi=3.141592653589793;

int main(){
  double a,b,h,m;cin>>a>>b>>h>>m;
  double hour = (h + m/60)/12;
  double minute = m/60;

  hour *= 2 * pi;
  minute *=  2 * pi;

  double dig = abs(hour - minute);

  double ans = (a*a) + (b*b) - 2*a*b*cos(dig);

  cout << fixed << setprecision(10) << pow(ans,0.5) << endl;


}