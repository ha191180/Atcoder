#include <bits/stdc++.h>
using namespace std;

long long sum(string str){
  long long ret = 0;
  int left = 0;
  for (int i = 0; i < str.size(); i++)
  {
    if (str.at(i) == '+')
    {
      //cout << str.substr(left, i - left) << " + " ;
      ret += stoll(str.substr(left, i - left));
      left = ++i;
    }
  }
  //cout << str.substr(left, str.size() - left);
  ret += stoll(str.substr(left, str.size() - left));
  //cout << " = " << ret << endl;
  return ret;
  
}

int main(){
  string s;
  cin >> s;
  long long ans = 0;
  for (int bit = 0; bit < (1 << s.size() - 1); bit++)
  {
    string tmp = s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
      if (bit & (1 << i))
      {
        tmp.insert(i + 1, "+");
      }

    }
    //cout << "get summation of: " << tmp << endl;
    ans += sum(tmp);
  }

  cout << ans << endl;
}