#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;

using namespace std;

map<ll,ll> primes;

/*
 * 計算クラス
 */
class Calc
{
    // 宣言
    ll a;

    public:
        // 素因数分解
        void decompositPrime(ll a);
};

/*
 * 素因数分解
 */
void Calc::decompositPrime(ll n)
{
    // 割る数の初期値
    a = 2;
    // √n ≧ a ( n ≧ a * a ) の間ループ処理
    while (n >= a * a) {
        // a で割り切れたら、a は素因数
        // そして、割られる数を a で割る
        // a で割り切れなかったら、 a を 1 増加させる
        if (n % a == 0) {
            primes[a]++;
            n /= a;
        } else {
            a++;
        }
    }
    // 最後に残った n は素因数
    primes[n]++;
}

/*
 * メイン処理
 */
int main()
{
    ll ans = 0;
    ll  iNum;

    
        // 計算クラスインスタンス化
        Calc objCalc;

            cin  >> iNum;
            if (iNum == 1)
            {
              cout << 0 << endl;
              return 0;
            }
            // 素因数分解
            objCalc.decompositPrime(iNum);
        
    ll cnt;
    for (auto && i : primes) {
      cnt = 1;
      //cout << i.first << ": " << i.second << endl;
      while (i.second - cnt >= 0) {
         i.second-=cnt;
         cnt++;
         ans++;
      }
      cnt = 1;
    }

    cout << ans << endl;

    // 正常終了
    return 0;
}