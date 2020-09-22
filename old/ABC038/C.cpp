#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    int right = 0;
    long long ans = 0;
    for (int left = 0; left < n; left++)
    {
        while (right < n - 1 && a.at(right) < a.at(right + 1))
        {
            right++;
        }
        ans += (right - left + 1);
        if (left == right)right++;
    }
    cout << ans << endl;
}