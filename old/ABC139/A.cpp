#include <bits/stdc++.h>
using namespace std;


int main(){
  string s;cin>>s;
  string t;cin>>t;
  int count = 0;
  for (int i = 0; i < 3; i++)
  {
    if(s.at(i) == t.at(i))count++;
  }
  
  cout << count << endl;
}