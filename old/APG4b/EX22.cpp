#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int> > p(n);
    for (auto &&i : p)
    {
        cin >> i.first >> i.second;
    }
    for (auto &&i : p)
    {
        swap(i.first, i.second);
    }
    sort(p.begin(), p.end());
    for (auto &&i : p)
    {
        printf("%d %d\n", i.second, i.first);
    }
    return 0;
}