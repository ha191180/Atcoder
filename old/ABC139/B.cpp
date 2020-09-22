#include <bits/stdc++.h>
using namespace std;


int main(){
  int a, b; cin >> a >> b;
  int all = 1;
  int sum = 0;
  while (b > all)
  {
    all--;
    all += a;
    sum++;
  }
  cout << sum << endl;
}