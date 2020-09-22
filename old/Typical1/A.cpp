#include<bits/stdc++.h>
using namespace std;


int h, w; 

struct posix
{
    int x;
    int y;
    posix plus(int plsx, int plsy){
        posix tmp = *this;
        tmp.x += plsx;
        tmp.y += plsy;
        return tmp;
    }
};

bool flag = false;

int dfs(vector<vector<char>> &graph,vector<vector<bool>> &unclearmap, int depth, posix posix){
    //cout << "x = " << posix.x << "y = " << posix.y << endl;
    unclearmap.at(posix.y).at(posix.x) = false;
    if (graph[posix.y][posix.x] == 'g') flag = true;
    if (posix.x >= 1    && unclearmap[posix.y][posix.x - 1] && graph[posix.y][posix.x - 1] != '#')dfs(graph, unclearmap, ++depth, posix.plus(-1, 0));
    if (posix.x < w - 1 && unclearmap[posix.y][posix.x + 1] && graph[posix.y][posix.x + 1] != '#')dfs(graph, unclearmap, ++depth, posix.plus(1, 0));
    if (posix.y >= 1    && unclearmap[posix.y - 1][posix.x] && graph[posix.y - 1][posix.x] != '#')dfs(graph, unclearmap, ++depth, posix.plus(0, -1));
    if (posix.y < h - 1 && unclearmap[posix.y + 1][posix.x] && graph[posix.y + 1][posix.x] != '#')dfs(graph, unclearmap, ++depth, posix.plus(0, 1));
    return 0;
}



int main(){
    cin >> h >> w;
    vector<vector<char>> graph(h,vector<char>(w));
    posix start;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> graph.at(i).at(j);
            if (graph.at(i).at(j) == 's')
            {
                start.x = j;
                start.y = i;
            }
        }
    }
    vector<vector<bool>> unclearmap(h,vector<bool>(w, true));
    
    //solve
    int ans = dfs(graph, unclearmap, 0, start);
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}