#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a;
  vector<map<int,bool>> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    for (int j = 0; j < a; j++)
    {
      
      int x; cin >> x;
      bool y; cin >> y;
      vec.at(i)[x] = y;
      
    }
    
  }
  /*
  //input確認out
  for (auto &&i : vec)
  {
    cout << "opinion" << endl;
    for (auto &&j : i)
    {
      cout << "Number " << j.first << " is ";
      if (j.second) cout << "honest" << endl;
      else cout << "unreliable" << endl;
    }
    
  }
  */

  int ans = 0;


  for (int bit = 0; bit < (1 << n); bit++)
  {
    bool flag = true;
    int tmp = 0;
    //cout << "######roop: " << bit << endl;
    for (int i = 0; i < n; i++)
    {
      if (bit & (1 << i)) //iが正直（という設定）かどうかのbool値
      {
        tmp++;
        for (auto &&e : vec.at(i))//正直者の証言がランダムに取り出される。
        {
          int key = e.first;
          bool value = e.second;
          //cout << i << " says " << key << " is " << (value ? "honest" : "unreliable") << " but actually, " << (bit & (1 << key - 1) ? "honest" : "unreliable") << endl;
          if (bool(bit & (1 << key - 1)) != value) 
          {
            //cout << "flag down" << endl;
            flag =false; //設定情報(bit)がmap[key] = value と一致しなければ矛盾フラグをさげる。
            break;
          }
        }
        
      }
      
    }
    if(flag)ans = max(ans, tmp);
    //cout << "answer is " << ans << " now." << endl;
  }
  cout << ans << endl;

}