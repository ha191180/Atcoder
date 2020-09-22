#include <bits/stdc++.h>
using namespace std;


int main(){
  string n;
  cin >> n;
  for (auto &&i : n)
  {
    int a = i - '0';
    if (a == 7)
    {
      cout << "Yes" << endl;
      return 0;
    }

  }
  cout << "No" << endl;

}