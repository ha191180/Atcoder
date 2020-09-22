#include <bits/stdc++.h>
using namespace std;

int main(){
  int k; cin >>k;
  int a, b; cin >> a >> b;
  bool flag = false;
  for (int i = a; i <= b; i++)
  {
    if(i % k == 0)flag = true;
    
  }
  if(flag)cout << "OK" <<endl;
  else cout << "NG" << endl;

  return 0;
}