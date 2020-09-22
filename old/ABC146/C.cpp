#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;


ll a,b,x;

int digit(ll x)
{
  int count = 1;
  for (int i = 0; i < 20; i++)
  {
    if (x / 10 != 0)
    {
      count++;
      x /= 10;
    }

  }

  return count;
}

ll f(ll x)
{
  return (a * x + b * digit(x)); 
}

int main(){
  cin>>a>>b>>x;
  ll ans = 0;
  if (f(1) > x)
  {
    cout << 0 << endl;
    return 0;
  }

  ll left = 0;
  ll right = 0;
  for (int i = 0; i < 20; i++)
  {
    ll target = pow(10,i);
    if (f(target) > x)
    {
      right = target;
      left = pow(10,i-1);
      break;
    }
    
  }
  right++;
  left--;

  //cout << left << " to " << right << endl;

  while (right - left > 1)
  {
      ll target = (right + left) / 2;
      if(f(target) > x) right = target;
      else left = target;
      //cout << left << " to " << right << endl;

  }
  if(left >1e9)
  {
    cout << 1000000000 << endl;
    return 0;
  }
  
  cout << left << endl;
  //cout << digit(10) << digit(111) << endl;
  /*
  cout << f(9) << endl;
  cout << f(12345) << endl;
  cout << f(100) << endl;
  cout << f(10) << endl;
  */
}