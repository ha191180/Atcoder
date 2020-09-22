#include <bits/stdc++.h>
using namespace std;


int main(){
  long long n,m; cin>>n>>m;
  vector<long long int> a(n);
  long long sum = 0;
  for (auto &&i : a)
  {
    cin>>i;
    sum += i;
  }
  long long count = 0;
  //cerr << sum << endl;
  for (auto &&i : a)
  {
    if(i >= (sum/(4.0*m)))
    {
      count++;
    }

  }
  if (count >= m)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  
  
  
}