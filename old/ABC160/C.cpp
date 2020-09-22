#include <bits/stdc++.h>
using namespace std;


int main(){
  int k,n; cin >> k >> n;
  vector<int> A(n);
  for (auto &&i : A)
  {
    cin >> i;
  }
  vector<long long> len(n);
  for (int i = 0; i < n; i++)
  {
    if (i + 1 < n)
    {
      len.at(i) = A.at(i + 1) - A.at(i);
    }
    else
    {
      len.at(i) = (k -  A.at(n - 1)) + A.at(0);
    }
    
  }
  
  sort(len.begin(), len.end());
  cout << k - len.at(n - 1) << endl;
  
  
}