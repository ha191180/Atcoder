#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> l(0);
    l.push_back(2);
    l.push_back(1);
    for (size_t i = 2; i <= n; i++)
    {
        l.push_back(l.at(i-1) + l.at(i-2));
    }
    cout << l.back() << endl;
}