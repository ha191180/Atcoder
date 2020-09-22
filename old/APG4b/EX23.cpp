#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    map<int,int> mp;
    for (auto &&i : a){
        if (mp.count(i))
        {
            mp.at(i)++;
        }
        else
        {
            mp[i] = 1;
        }
    }
    int key;
    int tmp = -1;
    for (auto &&i : mp)
    {
        if (i.second > tmp )
        {
            tmp = i.second;
            key = i.first;
        }
        
    }
    cout << key << " " << mp[key] << endl;
}