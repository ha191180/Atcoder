#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

int main(){
  int t;cin>>t;
  for (int tests = 0; tests < t; tests++) {
    ll n,a,b,c,d;cin>>n>>a>>b>>c>>d;
    vector<pair<long double, char>> per;
    auto &&pa = make_pair(2.0/a,'a');
    auto &&pb = make_pair(3.0/b,'b');
    auto &&pc = make_pair(5.0/c,'c');
    per.push_back(pa);
    per.push_back(pb);
    per.push_back(pc);
    sort(per.begin(),per.end());
    reverse(per.begin(),per.end());
    ll target;
    int bairitu;
    char first = per.at(0).second;
    switch (first) {
      case 'a':{target = a;bairitu = 2;break;}
      case 'b':{target = b;bairitu = 3;break;}
      case 'c':{target = c;bairitu = 5;break;}
      default:{cout << "err" << endl;break;}
    }
    cout << first << " " << bairitu << endl;
    ll first_count = log(n)/log(bairitu);
    cout << first_count << endl;
    ll ans = (d*abs(n-powl(bairitu,first_count)) + d + target * first_count);
    cout << ans << endl;
    cout << endl;
    /*
    for (auto &&  i : per) {
      char next = i.second;
      ll bairitu2;
      ll target2;
      switch (next) {
        case 'a':{target2 = a;bairitu2 = 2;break;}
        case 'b':{target2 = b;bairitu2 = 3;break;}
        case 'c':{target2 = c;bairitu2 = 5;break;}
        default:{cout << "err" << endl;break;}
      }
      ans = (d*abs(n-powl(bairitu,first_count)) + d + target * first_count);
      

    }
    
    }
    */
  }
}