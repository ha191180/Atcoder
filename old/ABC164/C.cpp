#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> map;
    string key;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        map[key] = 1;
    }
    cout << map.size() << endl;
    return 0;
}