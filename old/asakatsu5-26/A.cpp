#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;
vector<string> weather = {"Sunny", "Cloudy", "Rainy"};


int main(){
  string s;cin>>s;
  for (int i = 0; i < 3; i++) {
    if(s == weather.at(i))
    {
      cout << weather.at((i+1)%3) << endl;
    }
  }
}