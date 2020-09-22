#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;
double p;

double f(double x){
  return x + p / pow(2, x/1.5);
}

int main(){
  cin>>p;
  
  double left = 0;
  double right = DBL_MAX/2;
  int count = 100000;
  while (count--)
  {
    double x1 = (left * 2 + right)/3;
    double x2 = (left + right * 2)/3;
    if (f(x1) > f(x2)) left = x1;
    else right = x2;
  }

  cout << fixed << setprecision(10) << f((left + right) / 2) << endl;
  

}