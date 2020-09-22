#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    int right = 0;
    int length = 0;
    map<int, bool> map;
    //map[a.at(0)] = true;
    for (int left = 0; left < n; left++)
    {
        
        while (right < n && !(map.count(a.at(right))))
        {
            map[a.at(right)] = true;
            right++;
        }
        if (left == right)right++;
        length = max(length, right - left);
        map.erase(a.at(left));
    }
    cout << length << endl;
    return 0;
}