#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k; cin >> n >> k;
  map<int,int> snuke;
  for (int i = 0; i < k; i++)
  {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++)
    {
      int tmp;
      cin >> tmp;
      if (!(snuke.count(tmp - 1)))snuke[tmp - 1] = 1;
    }
    
  }
  
  
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if(!(snuke.count(i)))ans++;
  }
  
  cout << ans << endl;
}