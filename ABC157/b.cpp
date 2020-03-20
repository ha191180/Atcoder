#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a(3, vector<int>(3));
    for (auto &&i : a)
    {
        for (auto &&j : i)
        {
            cin >> j;
        }
    }
    int n;
    cin >> n;
    vector<int> b(n);
    for (auto &&i : b)
    {
        cin >> i;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (a.at(j).at(k) == b.at(i))
                {
                    a.at(j).at(k) = -1;
                }
            }
        }
    }
    bool flag = false;
    for (int i = 0; i < 3; i++)
    {
        if (a.at(i).at(1-1) == a.at(i).at(2-1) 
        && a.at(i).at(2-1) == a.at(i).at(3-1) 
        && a.at(i).at(3-1) == a.at(i).at(1-1))
        {
            flag = true;
        }
        if (a.at(1-1).at(i) == a.at(2-1).at(i) 
        && a.at(2-1).at(i) == a.at(3-1).at(i) 
        && a.at(3-1).at(i) == a.at(1-1).at(i))
        {
            flag = true;
        }
    }
    if (a.at(1-1).at(1-1) == a.at(2-1).at(2-1) 
    && a.at(2-1).at(2-1) == a.at(3-1).at(3-1) 
    && a.at(3-1).at(3-1) == a.at(1-1).at(1-1))
    {
        flag = true;
    }
    if (a.at(1-1).at(3-1) == a.at(2-1).at(2-1) 
    && a.at(2-1).at(2-1) == a.at(3-1).at(1-1) 
    && a.at(3-1).at(1-1) == a.at(1-1).at(3-1))
    {
        flag = true;
    }
    if (flag == true)
    {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
}