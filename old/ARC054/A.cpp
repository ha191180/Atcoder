#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

double p;

double fPrime(double x)
{
  double ret = 1 + (p * (pow(2,-x/1.5) * log(2)));
  return ret;
}

int main(){
  cin>>p;
  double right = DBL_MAX;
  double left = 0.0;
  cout << fixed;
  cout << fPrime(1.5) << endl;
  while (right - left > 0.000000001)
  {
    double x = (right  + left)/2;
    if(fPrime(x) > 0.0)right = x;
    else if(fPrime(x) < 0.0)left = x;
    else
    {
      right = x;
      break;
    }
    //cout << setprecision(10) << "left: " << left << setprecision(10) << " right: " << right <<endl;
  }
  cout << right << endl;
  
}
