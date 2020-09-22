#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

bool check1(string s)
{
  bool ret = true;
  for (int i = 0; i < s.size()/2; i++)
  {
    if (s.at(i) == s.at(s.size() - 1 - i)) continue;
    ret = false;
  }
  //if(ret)cout << "true" << endl;
  //else cout << "false" << endl;
  return ret;
}


bool check2(string s)
{
  string sub;
  sub = s.substr(0,(s.size()-1)/2);
  //cout << sub << endl;
  return check1(sub);
}

bool check3(string s){
  int n = s.size();
  string sub = s.substr((n+3)/2-1);
  //cout << sub << endl;
  return check1(sub);
}

int main(){
  string s; cin >> s;
  if(check1(s)&&check2(s)&&check3(s))cout<<"Yes"<<endl;
  else cout << "No" << endl;
  return 0;
}