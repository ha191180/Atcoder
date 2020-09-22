#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    string s;
    cin >> s;
    int right = 1;
    map<int,int> map;
    for (int left = 0; left < s.size(); left++)
    {
        while (right < s.size() && stoull(s.substr(left,right - left))%2019 != 0)
        {
            cout << left << " " << right << " " << stoull(s.substr(left,right - left)) << endl;
            right++;
        }
        if(stoull(s.substr(left,right - left))%2019 == 0) map[left] = right;
        if (left == right)right++;
    }
    cout << map.size() << endl;
    return 0;
}
*/

/*
int main(){
    string s;
    cin >> s;
    map<int,int> map;
    for (int left = 0; left < (int)s.size(); left++)
    {
        for (int right = left + 4; right < (int)s.size() + 1; right++)
        {
            if(right - left < 20){
                //cout << left << " " << right << " " << stoull(s.substr(left,right - left)) << endl;
                if(stoull(s.substr(left,right - left))%2019 == 0) map[left] = right;
            }
        }
    }
    cout << map.size() << endl;
    return 0;
}
*/


/*
//combination: なんだこの短い関数！
int combi2(int x){
    return (x * (x - 1) )/ 2;
}


int main(){
    string s;
    cin >> s;
    map<unsigned long long, unsigned long long> amari; //Nihongo de oke
    for (int i = int(s.size() - 1); i >= 0 ; i--)
    {
        unsigned long long tmp = stoull(s.substr(i)) % 2019;
        if (amari.count(tmp)) amari[tmp]++;
        else                  amari[tmp] = 1;
    }

    
    //テスト出力
    for (auto &&i : amari)
    {
        cout << i.first << " appears " << i.second << "times\n";
    }
    

    unsigned long long ans = 0;
    for (auto &&i : amari)
    {
        if(i.second > 1) ans += combi2(i.second);
        if(i.first == 0) ans += i.second;
    }
    
    cout << ans << endl;
}


*/



int combi2(int x){
    return (x * (x - 1) )/ 2;
}


int xx10(int x){
    int ret = 1;
    for (int i = 0; i < x; i++)
    {
        ret *= 10;
    }
    return ret;
}



int main(){
    string s; cin >> s;
    vector<int> amari(s.size());
    int prev = 0;
    int prev_pow = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        amari.at(i) = (s.at(i) - '0') * prev_pow;
        amari.at(i) += prev;
        amari.at(i) %= 2019;
        prev = amari.at(i);
        prev_pow *= 10;
        prev_pow %= 2019; //この2つなんでいるのかまったくわからん。

    }
    
    map<int, int> mp;
    for (auto &&i : amari)
    {
        mp[i]++;
    }
    
    unsigned long long ans = 0;
    for (auto &&i : mp)
    {
        if(i.second > 1) ans += combi2(i.second);
        if(i.first == 0) ans += i.second;
    }
    
    cout << ans << endl;
    
    
    
}