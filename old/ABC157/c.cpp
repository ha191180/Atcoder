#include<bits/stdc++.h>
using namespace std;


/*
int main(){
    int n,m; cin >> n >> m;
    vector<int> s(m),c(m);
    for (int i = 0; i < m; i++)
    {
        cin >> s.at(i) >> c.at(i);
    }
    vector<int> ans(n,-1);
    for (int i = 0; i < m; i++)
    {
        int digit = s.at(i) - 1;
        int num = c.at(i);
        if (digit == 0 && num == 0 && n != 1)
        {
            cout << -1 << endl;
            return 0;
        }
        if (ans.at(digit) == -1 || ans.at(digit) == num)
        {
            ans.at(digit) = num;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }

        
    }

    for (int i = 0; i < n; i++)
    {
        if (ans.at(i) == -1) ans.at(i) = 0;
    }
    
    if (n != 1 && ans.at(0) == 0)ans.at(0) = 1;


    for (auto &&i : ans)
    {
        cout << i;
    }
    
    cout << endl;
    
    
}
*/

int main(){
    int n,m; cin >> n >> m;
    vector<int> s(m),c(m);
    for (int i = 0; i < m; i++)
    {
        cin >> s.at(i) >> c.at(i);
    }
    int start;
    if (n == 1) start = 0;
    else start = pow(10,n-1);
    for (int i = start; i < pow(10,n); i++)
    {
        bool flag = true;
        string t = to_string(i);
        //cout << t << endl;
        for (int i = 0; i < m; i++)
        {
            int digit = s.at(i) - 1;
            int num = c.at(i);
            //cout << digit << " " << (char)(num + '0') << endl;

            if (t.at(digit) != (char)(num + '0'))flag = false;
            //else cout << "true" << endl;
        }
        if (flag)
        {
            cout << i << endl;
            return 0;
        }
        
    }
    cout << -1 << endl;
    return 0;

}
