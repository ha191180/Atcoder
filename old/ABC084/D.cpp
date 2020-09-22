#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> l(q);
    vector<int> r(q);
    for (int i = 0; i < q; i++)
    {
        cin >> l.at(i) >> r.at(i);
    }
    //似てる数
    //000101000001
    bitset<100001> isResemble(0);
    for (int i = 2; i <= 100000; i++)
    {
        isResemble.set(i);
    }
    for (int i = 2; i < 100000; i++)
    {
        if (isResemble[i])
        {
            for (int j = i * 2; j < 100000; j += i)
            {
                isResemble.reset(j);
            }
        }
    }
    for (int i = 100000 - 1; i >= 0; i--)
    {
        if (!isResemble[(i + 1)/2])
        {
            isResemble.reset(i);
        }
        
    }
    

    
    //累積和
    //sum = {0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 3}
    vector<int> sum(100001, 0);
    sum.at(0) = 0;
    for (int i = 1; i < 100001; i++)
    {
        sum.at(i) += sum.at(i - 1);
        if (isResemble[i])
        {
            sum.at(i)++;
        }
        
    }
    
    

    //solve
    vector<int> ans(q);
    for (int i = 0; i < q; i++)
    {
        ans.at(i) = sum.at(r.at(i)) - sum.at(l.at(i) - 1);
    }
    

    for (auto &&i : ans)
    {
        cout << i << endl;
    }
    
}