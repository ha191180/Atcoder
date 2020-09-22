#include <bits/stdc++.h>
using namespace std;



int main(){
    long long n, k; cin >> n >> k;
    vector<long long> s(n);
    bool flag0 = false;
    for (auto &&i : s)
    {
        cin >> i;
        if(i == 0)
        {
            flag0 = true;
        }
    }
    if (flag0)
    {
        cout << n << endl;
        return 0;
    }
    int start = 0;
    int end = 0;
    long long stack = 1;
    int length = 0;
    while (end < n)
    {
        if(stack <= k)
        {
            stack *= s.at(end);
            end++;
        }
        else if(stack > k)
        {
            if(start < end)
            {
                stack /= s.at(start);
                start++;
            }
            else
            {
                stack *= s.at(end);
                end++;
                stack /= s.at(start);
                start++;
            }
        }
        if (stack <= k)
        {
            length = max(length, end - start);
        }
    }
    cout << length << endl;
    return 0;
}