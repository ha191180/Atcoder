#include<bits/stdc++.h>
using namespace std;

int dx[4] = {1, -1, 0 ,0};
int dy[4] = {0, 0, 1, -1};

bool flag = false;

void clear(vector<string>& map){
    //cout << "clearing" << endl;
    for (auto &&i : map)
    {
        if (i != "xxxxxxxxxx")return;
    }
    flag = true;
    return;
}

void dfs(vector<string>& map, int x, int y){
    //cout << "x = " << x << "," << "y = " << y << endl;
    map.at(y).at(x) = 'x';
    for (int i = 0; i < 4; i++)
    {
        if (0 <= x + dx[i] && x + dx[i] < 10)
        if (0 <= y + dy[i] && y + dy[i] < 10)
        if (map.at(y + dy[i]).at(x + dx[i]) == 'o')
        {
            dfs(map, x + dx[i], y + dy[i]);
        }
    
    }

    clear(map);
    return;
}

int main(){
    vector<string> map(10);
    for (auto &&i : map)
    {
        cin >> i;
    }
    for (auto &&i : map)
    {
        if (i != "oooooooooo")
        {
            break;
        }
        flag = true;
    }
    

    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            if (map.at(y).at(x) == 'x')
            {
                auto tmp = map;
                dfs(tmp, x, y);
            }
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    
    return 0;
}